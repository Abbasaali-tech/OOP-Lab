#include "iostream"
using namespace std;

// Create a class Car with:
// • private speed
// • function setSpeed(int)
// • const function showSpeed()

class Car{
    private:
        int speed;
    public:
        void setSpeed(int speed){
            this->speed = speed;
        }

        void showSpeed() const{
            cout << "Speed: " << speed << endl;
        }
};

int main() {
    Car c1;
    c1.setSpeed(120);
    c1.showSpeed();
}