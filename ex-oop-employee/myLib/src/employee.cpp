#include "libHeader/employee.hpp"
#include <iostream>
#include <cstring>

Employee::Employee()
    : m_age(18),
    m_salary(100) {
        m_name = new char[1];
        m_name[0] = '\0';
    }

Employee::Employee(const char* name, int age, float salary)
    : m_age(age),
    m_salary(salary) {
        m_name = new char[strlen(name) + 1];
        strcpy(m_name, name);
    }

Employee::Employee(const Employee& other)
    : m_age(other.m_age),
    m_salary(other.m_salary) {
        m_name = new char[strlen(other.m_name) + 1];
        strcpy(m_name, other.m_name);
    }

Employee& Employee::operator=(const Employee& other) {
    if (this != &other) {
        delete[] m_name;
        m_name = new char[strlen(other.m_name) + 1];
        strcpy(m_name, other.m_name);
        m_age = other.m_age;
        m_salary = other.m_salary;
    }
    return *this;
}

void Employee::set_name(const char* e_name) {
    delete[] m_name;
    m_name = new char[strlen(e_name) + 1];
    strcpy(m_name, e_name);
}

void Employee::set_age(int e_age) {
    m_age = e_age;
}

void Employee::set_salary(float e_salary) {
    m_salary = e_salary;
}

char* Employee::get_name() const {
    return m_name;
}

int Employee::get_age() const {
    return m_age;
}

float Employee::get_salary() const {
    return m_salary;
}

void Employee::show() const {
    std::cout << "Name: " << m_name << " - " 
        << m_age << "Year Old" << " - " 
        << m_salary << "$\n";
}

Employee::~Employee() {
    delete[] m_name;
}