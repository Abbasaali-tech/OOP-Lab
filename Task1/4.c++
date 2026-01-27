#include  "iostream"
using namespace std;


// Write a program to take an integer array as an input from user and count all the even and odd
// numbers in that list and print the counts.

int main(){
    int numbers[10];
    int evenCount = 0;
    int oddCount = 0; 

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number " << i+1 << ": ";
        cin >> numbers[i];

        if (numbers[i] % 2 == 0)
        {
            evenCount++;
        }
        else{
            oddCount++;
        }
    }

    cout << "Odd Numbers Count: " << oddCount << endl << "Even Numbers Count: " << evenCount << endl;

}