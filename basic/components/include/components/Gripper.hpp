#ifndef GRIPPER_HPP
#define GRIPPER_HPP

#include "RobotComponents.hpp"
#include <string>

class Gripper : public RobotComponents {
    public:
        Gripper(int id, const std::string& name);

        void close();

        void open();

        void setForce(double force);

        double getForce() const;

    private:
        bool m_is_open;
        double m_force;
};

#endif