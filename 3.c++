#include  "iostream"
using namespace std;

// Write a program to make a simple calculator performing the four basic operations (+, -, *, /) on
// two numbers input by user. The following conditions must be satisfied:
//     a) A ‘+’ sign must not be used for addition.
//     b) You can only use a maximum of 3 variables. No more variables are allowed.
//     c) Your program should ask the user which operation he/she wants to perform and gives the
//     output accordingly.

int main(){
    
    int num1,num2;
    char op;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    cout << "Enter operation to be performed (+,-,/,*): ";
    cin >> op;

    if (op == '+')
    {
        cout << num1 - (-num2);
    }
    else if (op == '-')
    {
        cout << num1 - num2;
    }
    else if (op == '/')
    {
        cout << num1 / num2;
    }
    else if (op == '*')
    {
        cout << num1 * num2;
    }  
    else{
        cout << "Wrong operation!!" << endl;
    }
    return 0;
}