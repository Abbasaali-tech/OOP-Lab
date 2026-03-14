#include<iostream>
#include<string>
using namespace std;

// You’ve been hired by a fictional tech company that believes "more features = better product", and 
// your job is to design the ultimate multi-purpose gadget. You start with a base class called Device, 
// because every overpriced gadget—whether it’s a smartphone, tablet, or toaster that plays Spotify—
// needs a brand and model. So far, so good. Then, the marketing team gets involved. They demand 
// a Smartphone class that adds a SIM slot count (because dual SIM = instant genius) and a Tablet 
// class that adds stylus support (so people can pretend they’re productive). Both of these classes 
// inherit from Device, because duh, they’re devices. But hold on—things are about to go off the rails. 
// The CEO, in a caffeine-fueled eureka moment, demands a HybridDevice—a device that’s both a 
// Smartphone  and  a  Tablet.  You  sigh,  create  a HybridDevice  class  that  inherits  from  both 
// Smartphone and Tablet, and BAM—welcome to the Diamond Problem™! 🚨 Your HybridDevice 
// now has two separate copies of the Device class, and your compiler is looking at you like, "What 
// have you done?" 😡💥 Now, your mission (if you choose to accept it): fix this disaster using 
// virtual inheritance, so your HybridDevice doesn’t cause a compiler meltdown.  Finally, 
// demonstrate how to create and use a HybridDevice object without the program catching 
// fire.

class Device{
public:
    string brand;
    string model;

    Device(string b, string m){
        brand=b;
        model=m;
    }
};

class Smartphone: public virtual Device{
public:
    int simSlots;

    Smartphone(string b, string m, int s): Device(b,m){
        simSlots=s;
    }
};

class Tablet: public virtual Device{
public:
    bool stylusSupport;

    Tablet(string b, string m, bool st): Device(b,m){
        stylusSupport=st;
    }
};

class HybridDevice: public Smartphone, public Tablet{
public:
    HybridDevice(string b, string m, int s, bool st): Device(b,m), Smartphone(b,m,s), Tablet(b,m,st){
    }

    void display(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"SIM Slots: "<<simSlots<<endl;
        cout<<"Stylus Support: "<<stylusSupport<<endl;
    }
};

int main(){
    HybridDevice hd("Samsung", "Galaxy Ultra", 2, true);
    hd.display();
}