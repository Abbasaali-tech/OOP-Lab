#include<iostream>
using namespace std;

// You’re building a next-level game engine, and you need a system to keep track of all the important 
// stuff—like where things are and how badly they’re injured. To do this, you decide to create two 
// almighty base classes: 
//  Position  –  This  class  ensures  that  your  game  objects  know  where  they  are  in  3D  space 
// because teleporting randomly isn’t a great gameplay feature (unless you're making a glitch 
// simulator). It will have three trusty coordinates: x, y, and z—so objects don’t accidentally 
// fall into the void. 
//  Health  –  Because what’s a game without damage? This class keeps track of an object’s 
// health,  making  sure  your  characters  don’t  just  shrug  off  dragon  attacks  like  minor 
// inconveniences. 
// Now, things get even more interesting. You create the Character class, which inherits from both 
// Position and Health (because why settle for just one inheritance when you can have both?). This 
// class will represent the heroes and warriors of your game, complete with their own special abilities 
// and  actions.  Finally, in your main function, you’ll create a Character object, set its position and 
// health, and then show it off—because what’s the point of writing all this glorious code if you don’t 
// get to see your hero standing (or limping) in 3D space? So, fire up your keyboard, prepare for some 
// legendary multiple inheritance, and let’s build a game world that doesn’t instantly collapse into 
// chaos! 🎮🚀🔥

class Position{
public:
    int x;
    int y;
    int z;

    Position(int a, int b, int c){
        x=a;
        y=b;
        z=c;
    }
};

class Health{
public:
    int health;

    Health(int h){
        health=h;
    }
};

class Character: public Position, public Health{
public:
    Character(int a, int b, int c, int h): Position(a,b,c), Health(h){
    }

    void display(){
        cout<<"Position X: "<<x<<endl;
        cout<<"Position Y: "<<y<<endl;
        cout<<"Position Z: "<<z<<endl;
        cout<<"Health: "<<health<<endl;
    }
};

int main(){
    Character c(10, 20, 5, 100);
    c.display();
}