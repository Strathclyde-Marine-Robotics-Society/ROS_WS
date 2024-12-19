from launch import LaunchDescription
from launch_ros.actions import Node
 
def generate_launch_description():
    return LaunchDescription([
        Node(
            package='computer_vision',
            executable='detect',
            name='detect'
        ),
        Node(
            package='computer_vision',
            executable='camera',
            name='camera'
        ),
        Node(
            package='computer_vision',
            executable='display',
            name='display'
        ),
    ])
