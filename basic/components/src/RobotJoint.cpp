#include "components/RobotJoint.hpp"
#include <iostream>
#include <string>

RobotJoint::RobotJoint(int id, const std::string& name, double angle_limit)
    : RobotComponents(id, name),
    m_angle_limit(angle_limit),
    m_angle(0.0),
    m_velocity(0.0) {
        std::cout << "Joint '" << RobotComponents::getName() << "' created." << std::endl;
    }

void RobotJoint::setAngle(double angle) {
    if (angle >= m_angle_limit) {
        m_angle = m_angle_limit;
        std::cout << "Warning: Angle for " << RobotComponents::getName() << " exceeds limit. Clamped to " << m_angle_limit << std::endl;
    }
    else if (angle <= -m_angle_limit) {
        m_angle = -m_angle_limit;
        std::cout << "Warning: Angle for " << RobotComponents::getName() << " exceeds limit. Clamped to " << -m_angle_limit << std::endl;
    }
    else {
        m_angle = angle;
    }
}

double RobotJoint::getAngle() const {
    return m_angle;
}

void RobotJoint::setVelocity(double velocity) {
    m_velocity = velocity;
}

double RobotJoint::getVelocity() const {
    return m_velocity;
}

void RobotJoint::printStatus() const {
    RobotComponents::printStatus();
    std::cout << "Joint [" << RobotComponents::getName() << "]: Pos = " << m_angle << " deg, Vel = " << m_velocity << " dps\n";
}