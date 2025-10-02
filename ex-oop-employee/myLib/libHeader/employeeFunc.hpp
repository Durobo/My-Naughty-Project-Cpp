#ifndef EMPLOYEE_FUNC_HPP
#define EMPLOYEE_FUNC_HPP

#include "employee.hpp"
#include <vector>

namespace func {
    void enter_arr(std::vector<Employee>& arr);

    void print_search_age_arr(const std::vector<Employee>& arr);

    void print_search_salary_arr(const std::vector<Employee>& arr);

    void print_search_name_arr(const std::vector<Employee>& arr);
}

#endif