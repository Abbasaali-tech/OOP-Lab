#include <iostream>
using namespace std;

// • Create a Weapon class:
// o weaponName
// o damage
// • Create a Player class:
// o playerName

// Lab 4 & 5 Tasks

// o health
// o Weapon object inside Player (Composition)
// • Use array of Player objects
// • Use static int activePlayers
// • Create a const function showStatus()
// • When a player object is destroyed, active players should reduce
// Hint: Weapon should not exist without Player.

class Weapon {
public:
    string weaponName;
    int damage;
};

class Player {
public:
    string playerName;
    int health;
    Weapon weapon;
    static int activePlayers;

    Player() {
        activePlayers++;
    }

    ~Player() {
        activePlayers--;
    }

    void showStatus() const {
        cout << playerName << " "
             << health << " "
             << weapon.weaponName << " "
             << weapon.damage << endl;
    }
};

int Player::activePlayers = 0;

int main() {
    Player p[2];

    p[0].playerName = "Ali";
    p[0].health = 100;
    p[0].weapon.weaponName = "Gun";
    p[0].weapon.damage = 50;

    p[1].playerName = "Ahmed";
    p[1].health = 90;
    p[1].weapon.weaponName = "Sword";
    p[1].weapon.damage = 40;

    for(int i=0;i<2;i++) {
        p[i].showStatus();
    }

    cout << "Active: " << Player::activePlayers << endl;
}
