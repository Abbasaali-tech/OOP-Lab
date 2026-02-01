#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    Employee();                      
    Employee(string n, int i, double s);

    void setName(string n);
    void setId(int i);
    void setSalary(double s);

    string getName();
    int getId();
    double getSalary();

    void display();
};

#endif
