#include<iostream>
#include<string>
using namespace std;

// Picture an innovative design tool aimed at architects and graphic designers that allows for
// creating, manipulating, and analyzing various geometric shapes. The system is structured
// around a Shape class, which includes data members such as position, color, and an optional
// borderThickness. It provides functions like draw() for rendering, calculateArea() for area
// measurement, and calculatePerimeter() for perimeter computation.
// Derived classes such as Circle, Rectangle, Triangle, and Polygon introduce their own
// properties—for example, a Circle includes radius and center position, while a Rectangle
// includes width, height, and top-left corner position. Each derived class overrides draw(),
// calculateArea(), and calculatePerimeter() to handle their respective geometries.

class Shape{
public:
    string position;
    string color;
    float borderThickness;

    Shape(string pos, string col, float bt){
        position=pos;
        color=col;
        borderThickness=bt;
    }

    void draw(){
        cout<<"Drawing shape at "<<position<<endl;
    }

    void calculateArea(){
        cout<<"Area not defined for base shape."<<endl;
    }

    void calculatePerimeter(){
        cout<<"Perimeter not defined for base shape."<<endl;
    }
};

class Circle: public Shape{
public:
    float radius;
    string center;

    Circle(string pos, string col, float bt, float r, string c): Shape(pos,col,bt){
        radius=r;
        center=c;
    }

    void draw(){
        cout<<"Drawing Circle at "<<center<<" with color "<<color<<endl;
    }

    void calculateArea(){
        float area=3.14*radius*radius;
        cout<<"Circle Area: "<<area<<endl;
    }

    void calculatePerimeter(){
        float perimeter=2*3.14*radius;
        cout<<"Circle Perimeter: "<<perimeter<<endl;
    }
};

class Rectangle: public Shape{
public:
    float width;
    float height;
    string topLeftCorner;

    Rectangle(string pos, string col, float bt, float w, float h, string tlc): Shape(pos,col,bt){
        width=w;
        height=h;
        topLeftCorner=tlc;
    }

    void draw(){
        cout<<"Drawing Rectangle at "<<topLeftCorner<<" with color "<<color<<endl;
    }

    void calculateArea(){
        float area=width*height;
        cout<<"Rectangle Area: "<<area<<endl;
    }

    void calculatePerimeter(){
        float perimeter=2*(width+height);
        cout<<"Rectangle Perimeter: "<<perimeter<<endl;
    }
};

class Triangle: public Shape{
public:
    float sideA;
    float sideB;
    float sideC;

    Triangle(string pos, string col, float bt, float a, float b, float c): Shape(pos,col,bt){
        sideA=a;
        sideB=b;
        sideC=c;
    }

    void draw(){
        cout<<"Drawing Triangle at "<<position<<" with color "<<color<<endl;
    }

    void calculateArea(){
        float s=(sideA+sideB+sideC)/2;
        float area=s*(s-sideA)*(s-sideB)*(s-sideC);
        cout<<"Triangle Area: "<<area<<endl;
    }

    void calculatePerimeter(){
        float perimeter=sideA+sideB+sideC;
        cout<<"Triangle Perimeter: "<<perimeter<<endl;
    }
};

class Polygon: public Shape{
public:
    int numSides;
    float sideLength;

    Polygon(string pos, string col, float bt, int ns, float sl): Shape(pos,col,bt){
        numSides=ns;
        sideLength=sl;
    }

    void draw(){
        cout<<"Drawing Polygon at "<<position<<" with color "<<color<<endl;
    }

    void calculateArea(){
        cout<<"Polygon Area calculation depends on type."<<endl;
    }

    void calculatePerimeter(){
        float perimeter=numSides*sideLength;
        cout<<"Polygon Perimeter: "<<perimeter<<endl;
    }
};

int main(){
    Circle c("Center", "Red", 1.5, 7.0, "(0,0)");
    c.draw();
    c.calculateArea();
    c.calculatePerimeter();

    cout<<endl;

    Rectangle r("TopLeft", "Blue", 2.0, 5.0, 3.0, "(1,1)");
    r.draw();
    r.calculateArea();
    r.calculatePerimeter();

    cout<<endl;

    Triangle t("Base", "Green", 1.0, 3.0, 4.0, 5.0);
    t.draw();
    t.calculateArea();
    t.calculatePerimeter();

    cout<<endl;

    Polygon p("Origin", "Yellow", 1.0, 6, 4.0);
    p.draw();
    p.calculatePerimeter();
}