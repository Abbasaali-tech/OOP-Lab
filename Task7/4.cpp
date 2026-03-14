#include<iostream>
#include<string>
using namespace std;

// Imagine designing a digital management system for a large university that seamlessly
// integrates academic and administrative operations. At the heart of this system is a Person
// class that stores universal data members such as name, id, address, phoneNumber, and email.
// It provides functions like displayInfo() to show personal details and updateInfo() to modify
// them.
// Derived classes—Student, Professor, and Staff—extend this system by introducing specific
// data members:
//      Student includes coursesEnrolled, GPA, and enrollmentYear, modifying displayInfo()
//     to show academic records.
//      Professor has department, coursesTaught, and salary, updating displayInfo() to
//     display faculty-specific details.
//      Staff maintains department, position, and salary, tailoring displayInfo() to reflect
//     administrative roles.
// An additional Course class, with attributes like courseId, courseName, credits, instructor, and
// schedule, provides functions such as registerStudent(student) and calculateGrades(). This
// ensures an interactive system where function overrides enable dynamic role-based
// management.

class Person{
public:
    string name;
    int id;
    string address;
    string phoneNumber;
    string email;

    Person(string n, int i, string a, string pn, string em){
        name=n;
        id=i;
        address=a;
        phoneNumber=pn;
        email=em;
    }

    void displayInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Phone: "<<phoneNumber<<endl;
        cout<<"Email: "<<email<<endl;
    }

    void updateInfo(string newAddress, string newPhone){
        address=newAddress;
        phoneNumber=newPhone;
        cout<<"Info updated."<<endl;
    }
};

class Student: public Person{
public:
    string coursesEnrolled;
    float GPA;
    int enrollmentYear;

    Student(string n, int i, string a, string pn, string em, string ce, float gpa, int ey): Person(n,i,a,pn,em){
        coursesEnrolled=ce;
        GPA=gpa;
        enrollmentYear=ey;
    }

    void displayInfo(){
        cout<<"--- Student Info ---"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Courses: "<<coursesEnrolled<<endl;
        cout<<"GPA: "<<GPA<<endl;
        cout<<"Enrollment Year: "<<enrollmentYear<<endl;
    }
};

class Professor: public Person{
public:
    string department;
    string coursesTaught;
    float salary;

    Professor(string n, int i, string a, string pn, string em, string dep, string ct, float sal): Person(n,i,a,pn,em){
        department=dep;
        coursesTaught=ct;
        salary=sal;
    }

    void displayInfo(){
        cout<<"--- Professor Info ---"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Courses Taught: "<<coursesTaught<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

class Staff: public Person{
public:
    string department;
    string position;
    float salary;

    Staff(string n, int i, string a, string pn, string em, string dep, string pos, float sal): Person(n,i,a,pn,em){
        department=dep;
        position=pos;
        salary=sal;
    }

    void displayInfo(){
        cout<<"--- Staff Info ---"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Position: "<<position<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

class Course{
public:
    int courseId;
    string courseName;
    int credits;
    string instructor;
    string schedule;

    Course(int ci, string cn, int cr, string ins, string sch){
        courseId=ci;
        courseName=cn;
        credits=cr;
        instructor=ins;
        schedule=sch;
    }

    void registerStudent(string studentName){
        cout<<studentName<<" registered in "<<courseName<<endl;
    }

    void calculateGrades(){
        cout<<"Grades calculated for course: "<<courseName<<endl;
    }
};

int main(){
    Student s("Ali", 101, "Karachi", "03001234567", "ali@uni.com", "OOP, DSA", 3.8, 2022);
    s.displayInfo();

    cout<<endl;

    Professor p("Dr. Khan", 201, "Lahore", "03119876543", "khan@uni.com", "CS", "OOP, AI", 150000);
    p.displayInfo();

    cout<<endl;

    Staff st("Bilal", 301, "Islamabad", "03221122334", "bilal@uni.com", "Admin", "Clerk", 50000);
    st.displayInfo();

    cout<<endl;

    Course c(401, "OOP", 3, "Dr. Khan", "Mon-Wed 10am");
    c.registerStudent("Ali");
    c.calculateGrades();
}