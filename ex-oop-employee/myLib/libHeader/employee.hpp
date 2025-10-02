#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

class Employee {
    public:
        Employee();
        Employee(const char* name, int age, float salary);

        Employee(const Employee& other);
        Employee& operator= (const Employee& other);

        void set_name(const char* e_name);
        void set_age(int e_age);
        void set_salary(float e_salary);

        char* get_name() const;
        int get_age() const;
        float get_salary() const;

        void show() const;

        ~Employee();

    private:
        char* m_name;
        int m_age;
        float m_salary;
};

#endif