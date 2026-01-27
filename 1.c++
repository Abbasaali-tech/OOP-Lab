#include  "iostream"
using namespace std;


// Write a C++ program to check whether a given number is prime or not. Allow the user to input a
// number and display whether it's prime or not?

int main(){
    int num;
    cout << "Enter Number: ";
    cin >> num;

    for (int i = 2; i < num/2; i++)
    {
        if (num % i == 0)
        {
            cout << "Not a Prime!!" << endl;
            return 0;
        }
    }
    cout << "Prime number!!" << endl;
}