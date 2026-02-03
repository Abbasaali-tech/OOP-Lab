#include "Employee.h"

// Now, considering question 5, you are tasked with separating the class definition into a header
// file (Employee.h), then implementation file (Implement.cpp). Lastly, demonstrate it all by
// creating at least 3 instances in a separate file containing main function (main.cpp).

int main(){
    Employee emp1, emp2, emp3;

    cout << "Employee 1:\n";
    emp1.get_Data();
    emp1.Salary_after_tax();
    emp1.update_tax_percentage();

    cout << "\nEmployee 2:\n";
    emp2.get_Data();
    emp2.Salary_after_tax();
    emp2.update_tax_percentage();

    cout << "\nEmployee 3:\n";
    emp3.get_Data();
    emp3.Salary_after_tax();
    emp3.update_tax_percentage();

    return 0;
}
