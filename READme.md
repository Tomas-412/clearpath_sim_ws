# ClearPath Simulation
**Overview** This package is a simulation setup downloaded from the ClearPath documentation. It provides the foundation for simulating robots in Gazebo using ROS 2.

**Link to download the official package:** https://docs.clearpathrobotics.com/docs/ros/tutorials/simulator/overview

**Workspace Structure** This simulation runs in the workspace ```/a200_0000```. Modify the robot configurations within the configuration package in the ```robot.yaml``` file.


# How to Start the Simulation

1. Ensure your ROS 2 workspace is set up and the package is built:

```
colcon build
source install/setup.bash
```

2. Launch the simulation with RViz visualization:


```ros2 launch clearpath_gz simulation.launch.py rviz:=true```


# Steps After Gazebo Launches

After launching Gazebo, the /cmd_vel topic needs to be adjusted to match your workspace.

1. Click the Play button to start controlling the robot, as soon as possible, as there is a timeout of 5 seconds and then the drive controller deactivates.
2. Go to the Teleop panel on the right side of Gazebo (as shown in the image).
3. In the Topic field, change /cmd_vel to include your workspace, e.g., /a200_0000/cmd_vel.

![image](https://github.com/user-attachments/assets/5d6d91f9-fdd7-4c53-a0c8-d99ad5070e96)


# Troubleshooting

1. **If you encounter the following errors:**

```
[ruby $(which ign) gazebo-1] 
[ruby $(which ign) gazebo-1] [ERROR] [1728687805.244555590] [a200_0000.controller_manager]: Switch controller timed out after 5.000000 seconds!
[spawner-8] [ERROR] [1728687805.245342480] [a200_0000.spawner_platform_velocity_controller]: Failed to activate controller
[ERROR] [spawner-8]: process has died [pid 51091, exit code 1, cmd '/opt/ros/humble/lib/controller_manager/spawner --controller-manager-timeout 60 platform_velocity_controller --ros-args -r __ns:=/a200_0000'].
[imu_filter_madgwick_node-17] [WARN] [1728687807.262923303] [a200_0000.imu_filter_node]: Still waiting for data on topic imu/data_raw...
[ruby $(which ign) gazebo-1] [ERROR] [1728687810.244952343] [a200_0000.controller_manager]: Switch controller timed out after 5.000000 seconds!
[spawner-7] [ERROR] [1728687810.245729779] [a200_0000.spawner_joint_state_broadcaster]: Failed to activate controller
```

2. **Reset the controller by running:**

```ros2 run controller_manager spawner platform_velocity_controller --controller-manager-timeout 120 --ros-args -r __ns:=/a200_0000```


