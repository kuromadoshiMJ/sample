#include<ros/ros.h>

int main(int argc,char** argv){
    ros::init(argc,argv,"arbitary");
    ROS_INFO_STREAM("Hello World!");
    ros::spin();
    return 0;
}