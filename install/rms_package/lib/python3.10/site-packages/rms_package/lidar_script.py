#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
from rms_interfaces.srv import ComponentError
from std_srvs.srv import Empty

class LIDAR_handler(Node):
    def __init__(self):
        super().__init__("lidar_handler")
        self.declare_parameters(
            namespace='',
            parameters=[
                ('msg_sending_period_s', rclpy.Parameter.Type.DOUBLE )
            ]
        )
        self.timeInterval = self.get_parameter('msg_sending_period_s').get_parameter_value().double_value

        self.lidarStatePublisher = self.create_publisher(Bool, "/lidar_state", 10)
        self.timer = self.create_timer(self.timeInterval, self.send_status)

        self.msgCounter = 0

        self.srv = self.create_service(Empty, 'lidar_error_handler', self.reset_callback)

        self.get_logger().info("LIDAR has been started!")

    def reset_callback(self, request, response):
        # if request.data:
        #     self.get_logger().info("Lidar reset succesfully!")
        #     response.success = True
        #     response.message = 'Lidar restarted successfully!'
        # else:
        #     self.get_logger().info("Request arrived, but with invalid data")
        #     response.success = True
        #     response.message = 'Lidar not restarted!'
        self.get_logger().info("Lidar reset succesfully!")
        return response

    def send_status(self):
        msg = Bool()

        if self.msgCounter >= 3:
            msg.data = False
            self.msgCounter = 0
            self.get_logger().info("LIDAR is going to fail!")
        else:
            msg.data = True
            self.msgCounter += 1

        self.lidarStatePublisher.publish(msg)
        


def main(args=None):
    rclpy.init(args=args)
    node = LIDAR_handler()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    