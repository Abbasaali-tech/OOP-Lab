#include "iostream"
#include "string"
using namespace std;

// Design an Employee class that takes care of the not-so-fun part of earning money—taxes! Start
// by crafting a get_data function that collects the employee’s name (because we need to know
// whose salary to slash), their monthly salary (so we can pretend like they're making money),
// and their tax percentage (because who doesn’t love the feeling of money slipping through their
// fingers?). Next, add a Salary_after_tax function that dramatically deducts 2% tax from the
// salary—because why let them keep all of it, right? It returns the remaining salary, which will
// hopefully be enough to buy a cup of coffee (if they're lucky). But hold onto your hat! There's
// also an update_tax_percentage function that lets you increase the tax rate—because who
// doesn’t enjoy surprising your employees with an unexpected increase in taxes (like 3% instead
// of 2%)? After that delightful change, the salary gets recalculated, and they get to see just how
// little they’re left with. It’s a perfect reminder that the only thing certain in life is taxes and less
// money!

class Employee{
    string name;
    double salary;
    double taxPercentage;

    public:
        void get_Data(){
            cout << "Enter employee name: ";
            cin >> name;
            cout << "Enter employee salary: ";
            cin >> salary;
            cout << "Enter tax percentage: ";
            cin >> taxPercentage;
        }
        void Salary_after_tax(){
            double salaryAfterTax = salary - (salary * taxPercentage / 100);
            cout << "Salary after tax: " << salaryAfterTax << endl;
        }
        void update_tax_percentage(){
            cout << "Enter new tax percentage: ";
            cin >> taxPercentage;
            Salary_after_tax();
        }
};

int main(){
    Employee emp;
    emp.get_Data();
    emp.Salary_after_tax();
    emp.update_tax_percentage();
}