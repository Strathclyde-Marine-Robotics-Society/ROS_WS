# ROS_WS
The new, open source repository for StrathVoyager's ROS2 Humble code

To run, clone the repository, then source both your local ROS2 installation and "install/local_setup.bash". After that, the launch file should run.

Currently only three nodes are up and running.

The camera node takes photos, stores them in /dev/shm (which should be a file system on RAM) and then broadcasts to say it has taken it.
It then waits until any nodes it has registered broadcast that they're ready, and repeats.

The detection node runs a YOLO model to detect buoys in the photos. When it starts, it registers with the camera node and then checks if a photo has been saved.
It then tries to detect buoys, broadcasts any it finds, and then broadcasts that it's ready and waits for a new photo.

The display node doesn't register with the camera, it waits for a new photo to be available, and then waits for any detections so they can be plotted.
It listens to the same topic as the camera so it can check when all nodes are ready, and then displays the image with all information plotted.
