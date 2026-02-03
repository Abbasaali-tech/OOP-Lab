#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class Employee{
    string name;
    double salary;
    double taxPercentage;

public:
    void get_Data();
    void Salary_after_tax();
    void update_tax_percentage();
};

#endif
