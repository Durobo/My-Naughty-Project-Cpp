#ifndef KINEMATICS_HPP
#define KINEMATICS_HPP

#include <Eigen/Dense>

class Kinematics {
    public:
        Kinematics(double x, double y, double theta);

        void move(double dx, double dy);

        Eigen::Vector3d getPose() const;

        void printPose() const;

    private:
        Eigen::Vector3d m_pose;
};

#endif