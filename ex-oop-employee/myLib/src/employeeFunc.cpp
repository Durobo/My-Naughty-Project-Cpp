#include "libHeader/employeeFunc.hpp"
#include "libHeader/employee.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

namespace func {
    void enter_arr(std::vector<Employee>& arr) {
        int size;
        std::cin >> size;
        for (int i = 0; i < size; i++) {
            char* name = new char[100];
            int age;
            float salary;
            std::cout << "Phan tu " << i << ": ";
            std::cin >> name >> age >> salary;
            Employee e_member(name, age, salary);
            arr.push_back(e_member);
            delete[] name;
        }
    }

    void print_search_age_arr(const std::vector<Employee>& arr) {
        auto [youngest, oldest] = std::minmax_element(
            arr.begin(), arr.end(),
            [](const Employee& a, const Employee& b) {
                return a.get_age() < b.get_age();
            }
        );
        std::cout << "Youngest: ";
        youngest->show();
        std::cout << "Oldest: ";
        oldest->show();
    }

    void print_search_salary_arr(const std::vector<Employee>& arr) {
        auto [low, high] = std::minmax_element(
            arr.begin(), arr.end(),
            [](const Employee& a, const Employee& b) {
                return a.get_salary() < b.get_salary();
            }
        );
        std::cout << "High: ";
        high->show();
        std::cout << "Low: ";
        low->show();
    }

    void print_search_name_arr(const std::vector<Employee>& arr) {
        char* name = new char[100];
        std::cout << "Enter name: ";
        std::cin >> name;
        bool kt = false;
        for (const auto& e : arr) {
            if (strcmp(name, e.get_name()) == 0) {
                e.show();
                kt = true;
            }
        }
        if (!kt) {
            std::cout << "ERROR!";
        }
        delete[] name;
    }    
}