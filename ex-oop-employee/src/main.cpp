#include "libHeader/employee.hpp"
#include <iostream>

int main() {
    Employee employee_1;
    char* name = new char[100];
    int age;
    float salary;
    std::cin >> name >> age >> salary;
    employee_1.set_name(name);
    employee_1.set_age(age);
    employee_1.set_salary(salary);
    employee_1.show();

    Employee employee_2("Duong", 20, 630);
    employee_2.show();

    Employee* employee_3 = new Employee("Pointer Duong", 20, 630);
    employee_3->show();
    delete employee_3;
}