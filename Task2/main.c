#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
    Employee e1("Ali", 101, 50000);
    Employee e2("Sara", 102, 60000);
    Employee e3("Ahmed", 103, 55000);

    e1.display();
    e2.display();
    e3.display();

    return 0;
}