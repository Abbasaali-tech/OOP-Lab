#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee() {
    name = "";
    id = 0;
    salary = 0.0;
}

Employee::Employee(string n, int i, double s) {
    name = n;
    id = i;
    salary = s;
}

void Employee::setName(string n) {
    name = n;
}

void Employee::setId(int i) {
    id = i;
}

void Employee::setSalary(double s) {
    salary = s;
}

string Employee::getName() {
    return name;
}

int Employee::getId() {
    return id;
}

double Employee::getSalary() {
    return salary;
}

void Employee::display() {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Salary: " << salary << endl;
    cout << "--------------------" << endl;
}
