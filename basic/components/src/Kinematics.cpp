#include "components/Kinematics.hpp"
#include <Eigen/Dense>
#include <iostream>

Kinematics::Kinematics(double x, double y, double theta) {
    m_pose << x, y, theta;
}

void Kinematics::move(double dx, double dy) {
    m_pose(0) += dx;
    m_pose(1) += dy;
}

Eigen::Vector3d Kinematics::getPose() const {
    return m_pose;
}

void Kinematics::printPose() const {
    std::cout << "Robot Pose (x, y, theta): ["
            << m_pose(0) << ", "
            << m_pose(1) << ", "
            << m_pose(2) << "]\n";
}
