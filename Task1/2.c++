#include  "iostream"
using namespace std;

// Create a C++ program to handle student marks management. The program should allow users to
// input marks for students in four courses: PF, OOP, DLD & ICT. It should then calculate the total
// marks, average marks, and determine the grade for each student based on their average.
// Use the following grading metrics:
//     90 or above: Grade A
//     80-89: Grade B
//     70-79: Grade C
//     60-69: Grade D
//     Below 60: Grade F

int main(){
    int PF,OOP,DLD,ICT;
    cout << "Enter marks PF-OOP-DLD-ICT respectively: ";
    cin >> PF;
    cin >> OOP;
    cin >> DLD;
    cin >> ICT;

    int totalMarks = PF+OOP+DLD+ICT;
    int avgMarks = (PF+OOP+DLD+ICT) / 4;

    cout << "Total Marks: " << totalMarks << endl << "Average Marks: " << avgMarks << endl;
    cout << "Your grade is: ";
    if (avgMarks >= 90)
    {
        cout << "A";
    }
    else if (avgMarks >= 80 && avgMarks <= 89)
    {
        cout << "B";
    }
    else if (avgMarks >= 70 && avgMarks <+ 79)
    {
        cout << "C";
    }
    else if (avgMarks >= 60 && avgMarks <= 69)
    {
        cout << "D";
    }
    else{
        cout << "Fail";
    }
}