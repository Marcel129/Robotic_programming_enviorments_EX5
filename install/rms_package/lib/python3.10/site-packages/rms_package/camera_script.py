#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
from std_srvs.srv import Empty

class Camera_handler(Node):
    def __init__(self):
        super().__init__("camera_handler")
        self.declare_parameters(
            namespace='',
            parameters=[
                ('msg_sending_period_s', rclpy.Parameter.Type.DOUBLE ),
                ('number_of_msg_before_fail', rclpy.Parameter.Type.INTEGER )
            ]
        )
        self.timeInterval = self.get_parameter('msg_sending_period_s').get_parameter_value().double_value
        self.maxMsgNo = self.get_parameter('number_of_msg_before_fail').get_parameter_value().integer_value

        self.cameraStatePublisher = self.create_publisher(Bool, "/camera_state", 10)
        self.timer = self.create_timer(self.timeInterval, self.send_status)

        self.msgCounter = 0

        self.srv = self.create_service(Empty, 'camera_error_handler', self.reset_callback)

        self.get_logger().info("Camera has been started!")

    def reset_callback(self, request, response):
        self.msgCounter = 0
        self.get_logger().info("Camera reset succesfully!")
        return response

    def send_status(self):
        msg = Bool()

        msg.data = self.msgCounter <= self.maxMsgNo
        self.msgCounter += 1

        self.cameraStatePublisher.publish(msg)
        


def main(args=None):
    rclpy.init(args=args)
    node = Camera_handler()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    