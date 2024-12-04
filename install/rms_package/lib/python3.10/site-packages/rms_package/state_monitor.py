#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
from rms_interfaces.srv import ComponentError

class StateMonitor(Node):
    def __init__(self):
        super().__init__("state_monitor")

        self.declare_parameters(
            namespace='',
            parameters=[
                ('sensors_list', rclpy.Parameter.Type.STRING_ARRAY ),
                ('sensor_response_timeouts', rclpy.Parameter.Type.DOUBLE_ARRAY)
            ]
        )


        self.sensorsList = self.get_parameter('sensors_list').get_parameter_value().string_array_value
        self.sensorResponseTimeouts = self.get_parameter('sensor_response_timeouts').get_parameter_value().double_array_value

        self.cameraSubscriber = self.create_subscription(Bool, "/camera_state", self.camera_callback, 10)
        self.lidarSubscriber = self.create_subscription(Bool, "/lidar_state", self.lidar_callback, 10)

        self.cliErrorHandler = self.create_client(ComponentError, 'sensor_error_handler')
        while not self.cliErrorHandler.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('ErrorHandler service not available, waiting again...')
        self.reqErrorHandler = ComponentError.Request()

        # self.cliCamera = self.create_client(ComponentError, 'camera_error_handler')
        # while not self.cliCamera.wait_for_service(timeout_sec=1.0):
        #     self.get_logger().info('camera service not available, waiting again...')
        # self.reqCamera = ComponentError.Request()

        self.get_logger().info("State monitor has been started!")

    def send_reset_request(self, sensorName):
        # self.reqErrorHandler.data = True
        self.reqErrorHandler.component_name = sensorName
        self.cliErrorHandler.call_async(self.reqErrorHandler)
        self.get_logger().info(f"{sensorName} failed! Reset request sent.")

    def camera_callback(self, msg: Bool):
        if msg.data:
            self.get_logger().info("Camera OK")
        else:
            self.send_reset_request(self.sensorsList[0])

    def lidar_callback(self, msg: Bool):
        if msg.data:
            self.get_logger().info("LIDAR OK")
        else:
            self.send_reset_request(self.sensorsList[1])
            

def main(args=None):
    rclpy.init(args=args)
    node = StateMonitor()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    