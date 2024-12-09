#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
from rms_interfaces.msg import SensorState
from rms_interfaces.srv import ComponentError
import time

class StateMonitor(Node):
    def __init__(self):
        super().__init__("state_monitor")

        self.declare_parameters(
            namespace='',
            parameters=[
                ('sensors_list', rclpy.Parameter.Type.STRING_ARRAY ),
                ('sensor_response_timeouts', rclpy.Parameter.Type.DOUBLE_ARRAY),
                ('checking_sensors_states_period', rclpy.Parameter.Type.DOUBLE)
            ]
        )

        self.sensorsList = self.get_parameter('sensors_list').get_parameter_value().string_array_value
        self.sensorResponseTimeouts = self.get_parameter('sensor_response_timeouts').get_parameter_value().double_array_value
        self.timeInterval = self.get_parameter('checking_sensors_states_period').get_parameter_value().double_value

        self.lastUpdates = {}
        self.maxTimeouts = {}
        self.sensorsStates = {}

        self.robotState = True

        currentTime = time.time()
        i = 0

        for sensor in self.sensorsList:
            self.create_subscription(SensorState, f"/{sensor}_state", self.sensor_callback, 10)
            self.lastUpdates[sensor] = currentTime
            self.sensorsStates[sensor] = True
            self.maxTimeouts[sensor] = self.sensorResponseTimeouts[i]
            i += 1
            self.get_logger().info(f"{sensor} initialized successfully!")

        self.cliErrorHandler = self.create_client(ComponentError, 'sensor_error_handler')
        while not self.cliErrorHandler.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('ErrorHandler service not available, waiting again...')
        self.reqErrorHandler = ComponentError.Request()

        self.timer = self.create_timer(self.timeInterval, self.check_sensors_states)
        self.robotStatePublisher = self.create_publisher(Bool, "/robot_state", 10)

        self.get_logger().info("State monitor has been started!")

    def send_reset_request(self, sensorName):
        self.reqErrorHandler.component_name = sensorName
        self.cliErrorHandler.call_async(self.reqErrorHandler)
        self.get_logger().info(f"{sensorName} failed! Reset request sent.")

    def sensor_callback(self, msg: SensorState):
        currentTime = time.time()
        if msg.state:
            self.get_logger().info(f"{msg.sensor_name} OK")
            self.lastUpdates[msg.sensor_name] = currentTime
            self.sensorsStates[msg.sensor_name] = True
        else:
            self.send_reset_request(msg.sensor_name)
            self.sensorsStates[msg.sensor_name] = False

    def check_sensors_states(self):
        currentTime = time.time()
        self.robotState = True

        for sensor in self.sensorsList:
            if currentTime - self.lastUpdates[sensor] > self.maxTimeouts[sensor]:
                self.send_reset_request(sensor)
                self.sensorsStates[sensor] = False
                self.get_logger().info(f"{sensor} is not responding! Reset request sent.")

            self.robotState = self.robotState and self.sensorsStates[sensor]

        msg = Bool()
        msg.data = self.robotState
        self.robotStatePublisher.publish(msg)
            

def main(args=None):
    rclpy.init(args=args)
    node = StateMonitor()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    