
# Command to start up the ROS2 simulation
ros2 launch clearpath_gz simulation.launch.py rviz:=true

Workspace
/a200_0000

#
From some reason the Controller has very short timeout and if the topic is not changed and nothing is submitted into it in 5 seconds the controller dies. Then it has to be reseted using the code below error messages.

```[ruby $(which ign) gazebo-1] 
[ruby $(which ign) gazebo-1] [ERROR] [1728687805.244555590] [a200_0000.controller_manager]: Switch controller timed out after 5.000000 seconds!
[spawner-8] [ERROR] [1728687805.245342480] [a200_0000.spawner_platform_velocity_controller]: Failed to activate controller
[ERROR] [spawner-8]: process has died [pid 51091, exit code 1, cmd '/opt/ros/humble/lib/controller_manager/spawner --controller-manager-timeout 60 platform_velocity_controller --ros-args -r __ns:=/a200_0000'].
[imu_filter_madgwick_node-17] [WARN] [1728687807.262923303] [a200_0000.imu_filter_node]: Still waiting for data on topic imu/data_raw...
[ruby $(which ign) gazebo-1] [ERROR] [1728687810.244952343] [a200_0000.controller_manager]: Switch controller timed out after 5.000000 seconds!
[spawner-7] [ERROR] [1728687810.245729779] [a200_0000.spawner_joint_state_broadcaster]: Failed to activate controller```
#
```
ros2 run controller_manager spawner platform_velocity_controller --controller-manager-timeout 120 --ros-args -r __ns:=/a200_0000
```
