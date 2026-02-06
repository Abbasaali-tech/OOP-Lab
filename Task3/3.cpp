#include "iostream"
using namespace std;

// Create a SmartDevice class to represent your high-tech home gadgets—because
// flipping switches manually is so last century. Give it attributes like device name, type
// (smart light, robo-vacuum, coffee overlord), and status (on or off). Build a
// parameterized constructor to bring these gadgets to life and a destructor that delivers an
// emotional farewell message when they meet their inevitable end. Test it by creating and
// deleting objects, and enjoy watching each device’s dramatic exit as they "power down"
// for the last time.

class SmartDevice{
    private:
        string deviceName;
        string deviceType;
        bool status;
    
    public:
        SmartDevice(string dN,string dT,bool s){
            deviceName = dN;
            deviceType = dT;
            status = s;

            cout << "Device Name: " << deviceName << " " << "Device Type: " << deviceType;
            if (status)
            {
                cout << "Online!" << endl;
            }
            else{
                cout << "Stand By!!" << endl;
            }
             
        }

        ~SmartDevice() {
            cout << "Farewell, " << deviceType << " '" << deviceName 
             << "'. Powering down for the last time..." << endl;
        }

        void toggle(){
            status = !status;   
            if (status)
            {
                cout << "is now ON!" << endl;
            }
            else{
                cout << "is now OFF!" << endl;
            }
        }
};

int main() {
    cout << "Creating devices...\n" << endl;

    SmartDevice* d1 = new SmartDevice("Living Room Light", "Smart Light", true);
    SmartDevice* d2 = new SmartDevice("RoboVac 3000", "Robo-Vacuum", false);
    SmartDevice* d3 = new SmartDevice("Coffee Master", "Coffee Overlord", true);

    cout << "\nToggling devices...\n" << endl;

    d1->toggle();
    d2->toggle();
    d3->toggle();

    cout << "\nDeleting devices...\n" << endl;
    delete d1;
    delete d2;
    delete d3;

    return 0;
}
