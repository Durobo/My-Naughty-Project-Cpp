#ifndef TWO_LINK_ARM_HPP
#define TWO_LINK_ARM_HPP

#include "components/RobotJoint.hpp"
#include <Eigen/Dense>
#include <memory>

class TwoLinkArm {
    public:
        TwoLinkArm(double link1_length, double link2_length);

        void setJointAngles(double theta1_deg, double theta2_deg);

        Eigen::Vector2d getEndEffectorPosition() const;

        void printStatus() const;

    private:
        double m_l1;
        double m_l2;

        std::unique_ptr<RobotJoint> m_joint1;
        std::unique_ptr<RobotJoint> m_joint2;
};

#endif