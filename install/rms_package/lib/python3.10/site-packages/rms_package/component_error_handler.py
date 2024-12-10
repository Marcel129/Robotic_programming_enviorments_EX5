#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rms_interfaces.srv import ComponentError
from std_srvs.srv import Trigger

class Error_handler(Node):
    def __init__(self):
        super().__init__("component_error_handler")

        self.declare_parameters(
            namespace='',
            parameters=[
                ('sensors_list', rclpy.Parameter.Type.STRING_ARRAY ),
                ('sensor_response_timeouts', rclpy.Parameter.Type.DOUBLE_ARRAY)
            ]
        )

        self.sensorsList = self.get_parameter('sensors_list').get_parameter_value().string_array_value
        self.sensorResponseTimeouts = self.get_parameter('sensor_response_timeouts').get_parameter_value().double_array_value

        self.get_logger().info("Component error handler has been started!")
        self.srv = self.create_service(ComponentError, 'sensor_error_handler', self.reset_callback)

        self.clientsList = {}

        for sensor in self.sensorsList:
            cli = self.create_client(Trigger, f'{sensor}_error_handler')
            while not cli.wait_for_service(timeout_sec=1.0):
                self.get_logger().info(f'{sensor} service not available, waiting again...')
            self.clientsList[sensor] = cli
            self.get_logger().info(f"{sensor} initialized successfully!")
            

    def reset_callback(self, request, response):
        self.get_logger().info(f"{request.component_name} reset request received!")
        future = self.clientsList[request.component_name].call_async(Trigger.Request())
        future.add_done_callback(self.sensor_respone_handler)

        response.success = True
        return response
    
    def sensor_respone_handler(self, future):
        response = future.result()
        
        if response.success:
            self.get_logger().info(f"{response.message} reset succesfully!")
        else:
            self.get_logger().info(f"Failed to reset {response.message}!")


def main(args=None):
    rclpy.init(args=args)
    node = Error_handler()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    