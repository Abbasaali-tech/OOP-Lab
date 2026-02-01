#include "iostream"
#include "string"
using namespace std;

// Create a class called water bottle. The water bottle has a company (made by), color and water
// capacity. The water capacity isstored in both liters(l) and milliliters(ml). Create variables and
// methods for your class. Methods should include getters and setters. Also create an additional
// method that updates the water capacity (both in l and ml) after asking user how much water a
// person has drank. Assume that the user always enters the amount in ml. Demonstrate the
// functionality of the water bottle in your main method.

class waterBottle{
    string company;
    string color;
    double waterCapacity;
    double waterCapacityInML;

    public:
        void setCompany(string c){
            company = c;
        }
        void setColor(string c){
            color = c;
        }
        void setWaterCapacity(double w){
            waterCapacity = w;
        }
        void setWaterCapacityInML(double w){
            waterCapacityInML = w;
        }

        string getCompany(){
            return company;
        }
        string getColor(){
            return color;
        }
        double getWaterCapacity(){
            return waterCapacity;
        }
        double getWaterCapacityInML(){
            return waterCapacityInML;
        }

        void updateWaterCapacity(){
            double waterDrank;
            cout << "Enter the amount of water drank!: " << endl;
            cin >> waterDrank;
            waterCapacityInML -= waterDrank;
            waterCapacity = waterCapacityInML / 1000;
        }
};

int main(){
    waterBottle bottle;
    bottle.setCompany("Alco");
    bottle.setColor("Blue");
    bottle.setWaterCapacity(1);
    bottle.setWaterCapacityInML(1000);
    
    cout << "Company: " << bottle.getCompany() << endl;
    cout << "Color: " << bottle.getColor() << endl;
    cout << "Water capacity: " << bottle.getWaterCapacity() << endl;
    cout << "Water capacity in ML: " << bottle.getWaterCapacityInML() << endl;

    bottle.updateWaterCapacity();
    cout << "Water capacity: " << bottle.getWaterCapacity() << endl;
    cout << "Water capacity in ML: " << bottle.getWaterCapacityInML() << endl;

    return 0;
}