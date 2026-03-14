#include<iostream>
#include<string>
using namespace std;


// You're about to craft the greatest game world ever (or at least one that compiles). It all starts with 
// the legendary Character class—the grand ancestor of all fighters, with two crucial stats: health (so 
// they don’t collapse after a light breeze) and damage (because tickling enemies doesn’t win battles). 
// Of course, this class needs a constructor to give life to these brave souls and a display function so 
// they can proudly show off their stats like RPG influencers. But what’s a game without good guys 
// and  bad  guys?  Enter the  Enemy  and  Player  classes,  both inheriting  from  Character. The  Enemy 
// exists solely to make players rage-quit, while the Player is the hero who either saves the world or 
// just hoards loot for hours. Both get their own constructors and display functions—because villains 
// and  heroes  alike  deserve  their  moment  in  the  spotlight.    Now,  hold  onto  your  enchanted  capes 
// because here comes the real magic—The Wizard! This arcane warrior inherits from Player but also 
// wields  magic  power  and  spells,  because  swinging  a  sword  is  way  too  basic.  Naturally,  it  gets  a 
// constructor  to  infuse  it  with  all  the  mystical  goodness,  plus  a  display  function  so  it  can  flex  its 
// sorcery  like  a  true  magical  influencer.  Finally, in your main function, you’ll summon a Wizard 
// object and display its stats, because if you’re writing all this code and not showing off the results, 
// did  the  magic  even  happen?  So,  grab your coding wand, chant “std::cout,” and let’s conjure up 
// some legendary C++ wizardry! ✨🔥🧙♂️ 


class Character{
public:
    int health;
    int damage;

    Character(int h, int d){
        health=h;
        damage=d;
    }

    void display(){
        cout<<"Health: "<<health<<endl;
        cout<<"Damage: "<<damage<<endl;
    }
};

class Enemy: public Character{
public:
    Enemy(int h, int d): Character(h,d){
    }

    void display(){
        cout<<"Enemy Stats:"<<endl;
        cout<<"Health: "<<health<<endl;
        cout<<"Damage: "<<damage<<endl;
    }
};

class Player: public Character{
public:
    Player(int h, int d): Character(h,d){
    }

    void display(){
        cout<<"Player Stats:"<<endl;
        cout<<"Health: "<<health<<endl;
        cout<<"Damage: "<<damage<<endl;
    }
};

class Wizard: public Player{
public:
    int magicPower;
    string spells;

    Wizard(int h, int d, int mp, string s): Player(h,d){
        magicPower=mp;
        spells=s;
    }

    void display(){
        cout<<"Wizard Stats:"<<endl;
        cout<<"Health: "<<health<<endl;
        cout<<"Damage: "<<damage<<endl;
        cout<<"Magic Power: "<<magicPower<<endl;
        cout<<"Spells: "<<spells<<endl;
    }
};

int main(){
    Wizard w(100, 30, 80, "Fireball");
    w.display();
}