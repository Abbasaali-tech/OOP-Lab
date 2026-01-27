#include  "iostream"
using namespace std;

// Imagine you are working on a project where the efficient generation of odd numbers is crucial.
// Your task is to write a C++ function that prints an odd number after every sequence of 5 even
// numbers in the range provided by the user. The catch is that you need to optimize the program for
// both correctness and efficiency.

int main(){
    int start,end;

    cout << "Enter start point: ";
    cin >> start;
    cout << "Enter end point: ";
    cin >> end;

    int count = 0;
    for (int i = start; i < end; i++)
    {
        if (count < 5)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
                count++;
            }
        }
        else{
            if (i % 2 != 0)
            {
                cout << i << endl;
                count = 0;
            }
        }
    }
}