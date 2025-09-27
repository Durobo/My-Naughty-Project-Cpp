#ifndef ROBOT_COMPONENTS_HPP
#define ROBOT_COMPONENTS_HPP

#include <string>

class RobotComponents {
    public:
        RobotComponents(int id, const std::string& name);

        virtual ~RobotComponents() = default;

        int getID() const;

        std::string getName() const;

        virtual void printStatus() const;

    private:
        int m_id;
        std::string m_name;
};

#endif