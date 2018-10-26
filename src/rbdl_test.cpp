
#include <iostream>
#include "ros/ros.h"
#include "std_msgs/String.h"

#include <sstream>
#include <rbdl/rbdl.h>

#ifndef RBDL_BUILD_ADDON_URDFREADER
	#error "Error: RBDL addon URDFReader not enabled."
#endif

#include <rbdl/addons/urdfreader/urdfreader.h>

using namespace RigidBodyDynamics;
using namespace RigidBodyDynamics::Math;


int main (int argc, char* argv[]) {
	ros::init(argc, argv, "rbdl_test");
	ros::NodeHandle n;
	rbdl_check_api_version (RBDL_API_VERSION);

        RigidBodyDynamics::Model* model = new Model();

        RigidBodyDynamics::Addons::URDFReadFromFile("/home/seop/catkin_ws/test/src/rbdl_test/src/samplemodel.urdf", model,true,false);

	ROS_INFO("Successfully loaded.");
	ROS_INFO("Total DoF=%d", model->dof_count);
	ROS_INFO("q size=%d", model->q_size);

	delete model;

 	return 0;
}

