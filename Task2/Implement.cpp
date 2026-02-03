#include <iostream>
#include "Employee.h"

void Employee::get_Data(){
    cout << "Enter employee name: ";
    cin >> name;

    cout << "Enter employee salary: ";
    cin >> salary;

    cout << "Enter tax percentage: ";
    cin >> taxPercentage;
}

void Employee::Salary_after_tax(){
    double salaryAfterTax = salary - (salary * taxPercentage / 100);
    cout << "Salary after tax: " << salaryAfterTax << endl;
}

void Employee::update_tax_percentage(){
    cout << "Enter new tax percentage: ";
    cin >> taxPercentage;

    Salary_after_tax();
}
