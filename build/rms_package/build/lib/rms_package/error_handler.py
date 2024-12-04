#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
from rms_interfaces.srv import ComponentError
from std_srvs.srv import Empty
import copy

class Error_handler(Node):
    def __init__(self):
        super().__init__("error_handler")

        # self.declare_parameters(
        #     namespace='',
        #     parameters=[
        #         ('sensors_list', rclpy.Parameter.Type.STRING_ARRAY ),
        #         ('sensor_response_timeouts', rclpy.Parameter.Type.DOUBLE_ARRAY)
        #     ]
        # )

        # self.sensorsList = self.get_parameter('sensors_list').get_parameter_value().string_array_value
        # self.sensorResponseTimeouts = self.get_parameter('sensor_response_timeouts').get_parameter_value().double_array_value

        # self.get_logger().info(f"lista sensorow w error handlerze: {self.sensorsList}")

        self.srv = self.create_service(ComponentError, 'sensor_error_handler', self.reset_callback)

        # self.clientsList = []

        # for sensor in self.sensorsList:
        #     cli = self.create_client(Empty, f"{sensor}_error_handler")
        #     while not cli.wait_for_service(timeout_sec=1.0):
        #         self.get_logger().info(f'{sensor} service not available, waiting again...')
        #     self.clientsList.append([sensor, copy.deepcopy(cli)])
        #     self.get_logger().info(f"{sensor} initialized successfully!")
            
        self.get_logger().info("Component error handler has been started!")

    def reset_callback(self, request, response):
        # response.success = True
        # for client in self.clientsList:
        #     if client[0] == request.component_name:
        #         client[1].call_async(ComponentError.Request())
        self.get_logger().info("Request received!")
        return response


def main(args=None):
    rclpy.init(args=args)
    node = Error_handler()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    