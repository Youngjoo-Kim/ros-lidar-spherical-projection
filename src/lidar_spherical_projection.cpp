#include "lidar_spherical_projection.h"
using namespace std;

ros::Publisher image_pub;

template<typename inT,typename outT>
auto mapping(inT input,
            inT inputMin, 
            inT inputMax, 
            outT outMin, 
            outT outMax)
{

}

pixel conversionFromPoint()
{

}

void pointsCallback(const sensor_msgs::PointCloud2::ConstPtr &msg)
{
    cout << "pointsCallback" << endl;
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "lidar_spherical_projection");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("chatter", 1000, pointsCallback);
    // image_pub = n.advertise<sensor_msgs::
    ros::spin();
    return 0;
}