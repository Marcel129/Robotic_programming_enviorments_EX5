#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool

class Camera_handler(Node):
    def __init__(self):
        super().__init__("camera_handler")
        self.declare_parameters(
            namespace='',
            parameters=[
                ('msg_sending_period_s', rclpy.Parameter.Type.DOUBLE )
            ]
        )
        self.timeInterval = self.get_parameter('msg_sending_period_s').get_parameter_value().double_value

        self.cameraStatePublisher = self.create_publisher(Bool, "/camera_state", 10)
        self.timer = self.create_timer(self.timeInterval, self.send_status)

        self.msgCounter = 0

        self.get_logger().info("Camera has stared to work")

    def send_status(self):
        msg = Bool()

        if self.msgCounter >= 5:
            msg.data = False
            self.msgCounter = 0
            self.get_logger().info("Camera is going to fail!")
        else:
            msg.data = True
            self.msgCounter += 1

        self.cameraStatePublisher.publish(msg)
        


def main(args=None):
    rclpy.init(args=args)
    node = Camera_handler()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    