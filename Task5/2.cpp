#include <iostream>
using namespace std;

// A software company manages employees and projects.
// Requirements:
// • Create a Project class:
// o projectTitle
// o duration
// • Create an Employee class:
// o empName
// o salary
// o Has-A relationship with Project (Aggregation)
// • Store multiple employees in an array
// • Use static float taxRate shared by all employees
// • Use const function calculateNetSalary()
// • Use static function to change tax rate
// Hint: One project can exist even if employee leaves.

class Project {
public:
    string projectTitle;
    int duration;
};

class Employee {
public:
    string empName;
    float salary;
    Project* project;
    static float taxRate;

    float calculateNetSalary() const {
        return salary - (salary * taxRate / 100);
    }

    static void changeTax(float t) {
        taxRate = t;
    }
};

float Employee::taxRate = 10;

int main() {
    Project p1;
    p1.projectTitle = "App";
    p1.duration = 6;

    Employee e[2];

    e[0].empName = "Ali";
    e[0].salary = 50000;
    e[0].project = &p1;

    e[1].empName = "Ahmed";
    e[1].salary = 60000;
    e[1].project = &p1;

    for(int i=0;i<2;i++) {
        cout << e[i].empName << " "
             << e[i].calculateNetSalary() << endl;
    }
}