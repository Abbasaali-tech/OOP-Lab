#include<iostream>
#include<string>
using namespace std;

// You’ve  been  assigned  the  ultimate  challenge:  developing  a  school  management  program  that 
// actually keeps track of students and teachers (because, apparently, shouting names during roll call 
// isn’t efficient). You start with a Person class, because everyone in a school—students, teachers, 
// and that one mysterious janitor—has a name and an age. But life gets more complicated! Students 
// have  a  student  ID  (to  misplace  their  library  books  officially)  and  a  grade  level  (because  calling 
// everyone "kid" isn't ideal), while teachers have a subject (which they lecture about with varying 
// enthusiasm) and a room number (where they trap students for extra assignments). Naturally, you 
// create Student and Teacher classes that inherit from Person and add their own special attributes. 
// But here’s where things get really wild: you need a GraduateStudent class that inherits from both 
// Student and Teacher, because some poor souls are both students AND teaching assistants—learning 
// by day, grading papers by night, and questioning their life choices at all times. Finally, in your main 
// function, you create a GraduateStudent object and display its details, because if they have to suffer 
// through  hybrid inheritance,  the  least  you  can  do is  let  them  see  their  own  existence  printed  out. 
// Now, grab your keyboard, embrace the chaos of multiple inheritance, and let’s make this school 
// system as smart as the overworked graduate students running it! 🎓📚💻

class Person{
public:
    string name;
    int age;

    Person(string n, int a){
        name=n;
        age=a;
    }
};

class Student: public virtual Person{
public:
    int studentID;
    int gradeLevel;

    Student(string n, int a, int id, int gl): Person(n,a){
        studentID=id;
        gradeLevel=gl;
    }
};

class Teacher: public virtual Person{
public:
    string subject;
    int roomNumber;

    Teacher(string n, int a, string sub, int rn): Person(n,a){
        subject=sub;
        roomNumber=rn;
    }
};

class GraduateStudent: public Student, public Teacher{
public:
    GraduateStudent(string n, int a, int id, int gl, string sub, int rn): Person(n,a), Student(n,a,id,gl), Teacher(n,a,sub,rn){
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Student ID: "<<studentID<<endl;
        cout<<"Grade Level: "<<gradeLevel<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Room Number: "<<roomNumber<<endl;
    }
};

int main(){
    GraduateStudent gs("Ali", 24, 1234, 4, "Mathematics", 305);
    gs.display();
}