#include "components/Gripper.hpp"
#include <iostream>
#include <string>

Gripper::Gripper(int id, const std::string& name)
    : RobotComponents(id, name),
    m_is_open(true),
    m_force(0.0) {}

void Gripper::close() {
    m_is_open = false;
}

void Gripper::open() {
    m_is_open = true;
}

void Gripper::setForce(double force) {
    m_force = force;
}

double Gripper::getForce() const {
    return m_force;
}