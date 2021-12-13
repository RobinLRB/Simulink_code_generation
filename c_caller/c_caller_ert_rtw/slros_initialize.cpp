#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "c_caller";

// For Block c_caller/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_c_caller_std_msgs_Float64> Pub_c_caller_113;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

