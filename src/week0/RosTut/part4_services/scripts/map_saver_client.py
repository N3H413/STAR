#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from nav2_msgs.srv import SaveMap

class MapSaver(Node):

    def __init__(self):
        super().__init__('map_saver_client')

        self.client = self.create_client(
            srv_type=SaveMap, 
            srv_name='/map_saver/save_map'
        ) 

        self.declare_parameters(
            namespace='',
            parameters=[
                ('map_file', 'my_map'),
                ('map_topic', '/map'),
                ('image_format', 'pgm'),
                ('map_mode', 'trinary'),
                ('free_thresh', 0.25),
                ('occupied_thresh', 0.65)
            ]
        ) 

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info(
                "Waiting for service..."
            ) 

    def send_request(self): 
        map_file_input = self.get_parameter(
            'map_file' 
        ).value
        map_topic_input = self.get_parameter(
            'map_topic'
        ).value
        image_format_input = self.get_parameter(
            'image_format'
        ).value
        map_mode_input = self.get_parameter(
            'map_mode'
        ).value
        free_thresh_input = self.get_parameter(
            'free_thresh'
        ).value
        occupied_thresh_input = self.get_parameter(
            'occupied_thresh'
        ).value

        self.get_logger().info(
            f"Sending the map storage request:\n"
            f" - Target File (map_url): {map_file_input}\n"
            f" - Listening topic: {map_topic_input}\n"
            f"   Awaiting response..."
        )

        request=SaveMap.Request()
        request.map_url=map_file_input
        request.map_topic=map_topic_input
        request.image_format=image_format_input
        request.map_mode=map_mode_input
        request.free_thresh=free_thresh_input
        request.occupied_thresh=occupied_thresh_input

        return self.client.call_async(request) 

def main():
    rclpy.init()
    client = MapSaver()

    future = client.send_request() 
    rclpy.spin_until_future_complete(client, future) 
    response = future.result() 

    if(future.result):
        client.get_logger().info("Success")
    else:
        client.get_logger().info("Failure saving") 

    client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()