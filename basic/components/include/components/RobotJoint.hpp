#ifndef ROBOT_JOINT_HPP
#define ROBOT_JOINT_HPP

#include "RobotComponents.hpp"
#include <string>

class RobotJoint : public RobotComponents {
    public:
        RobotJoint(int id, const std::string& name, double angle_limit);

        void setAngle(double angle);

        double getAngle() const;

        void setVelocity(double velocity);

        double getVelocity() const;

        void printStatus() const override;
    private:
        double m_angle_limit;
        double m_angle;
        double m_velocity;
};

#endif