#include "iostream"
using namespace std;

// Engine
// • horsepower
// Car
// • model
// • Engine object
// Print car details with engine power.

class Engine {
public:
    int horsepower;
};

class Car {
public:
    string model;
    Engine engine;

    void show() {
        cout << model << " - HP: " << engine.horsepower << endl;
    }
};

int main() {
    Car c1;
    c1.model = "Civic";
    c1.engine.horsepower = 150;

    c1.show();
}