#include "iostream"
#include "string"
using namespace std;

// Create a Circle class with the following member variables: radius, a double representing the
// circle’s radius, and pi, a double initialized with the value 3.14159. The class should include
// the following member functions: setRadius(), a mutator function to set the radius; getRadius(),
// an accessor function to retrieve the radius; getArea(), which returns the area of the circle using
// the formula area = pi * radius * radius; getDiameter(), which calculates and returns the
// diameter using diameter = radius * 2; and getCircumference(), which calculates and returns
// the circumference using circumference = 2 * pi * radius. Write a program that demonstrates
// the Circle class by prompting the user to input a radius, creating a Circle object, and displaying
// the calculated area, diameter, and circumference.

class Circle{
    double radius;
    double pi = 3.14159;

    public:

    void setRadius(double r){
        radius = r;
    }

    double getRadius(){
        return radius;
    }
    double getArea(){
        return pi * radius*radius;
    }
    double getDiameter(){
        return 2*radius;
    }
    double getCircumference(){
        return 2*pi*radius;
    }
};

int main(){
    Circle circle;
    double radius;
    cout << "Enter the radius: ";
    cin >> radius;
    circle.setRadius(radius);
    cout << "Area: " << circle.getArea() << endl;
    cout << "Diameter: " << circle.getDiameter() << endl;
    cout << "Circumference: " << circle.getCircumference() << endl;
    return 0;
}5