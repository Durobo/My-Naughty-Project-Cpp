#include "components/RobotComponents.hpp"
#include <iostream>
#include <string>

RobotComponents::RobotComponents(int id, const std::string& name)
    : m_id(id), m_name(name) {}

int RobotComponents::getID() const {
    return m_id;
}

std::string RobotComponents::getName() const {
    return m_name;
}

void RobotComponents::printStatus() const {
    std::cout << "Component [ID: " << m_id << ", Name: " << m_name << "]: ";
}