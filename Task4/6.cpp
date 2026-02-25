#include "iostream"
using namespace std;

// A game server tracks total players online.
// Create class Player:
// • name
// • static totalPlayers
// • constructor increments players
// • destructor decrements players
// • static function showPlayers()
// Test by creating objects inside a block { }.

class Player {
public:
    string name;
    static int totalPlayers;

    Player(string n) {
        name = n;
        totalPlayers++;
    }

    ~Player() {
        totalPlayers--;
    }

    static void showPlayers() {
        cout << "Players: " << totalPlayers << endl;
    }
};

int Player::totalPlayers = 0;

int main() {
    {
        Player p1("Ali");
        Player p2("Ahmed");
        Player::showPlayers();
    }

    Player::showPlayers();
}