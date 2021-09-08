#include<ros/ros.h>
#include "sample/file_head.hpp"

int main(int argc,char** argv){
    ros::init(argc,argv,"arbitrary");
    ros::NodeHandle nnnhhh("~");
    nm_spc::demo_class obj(nnnhhh);
    ROS_INFO_STREAM("Hello World!");
    ros::spin();
    return 0;
}