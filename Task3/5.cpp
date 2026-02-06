#include "iostream"
using namespace std;

// Create a FootballPlayer class to manage superstar footballers, with attributes like
// playerName, position, and goalCount—because every player deserves a legendary
// profile. Implement a default constructor that sets values like "Unknown Player,"
// "Benchwarmer," and 0 goals. Add a parameterized constructor for customizing football
// icons and a copy constructor for cloning players (because every team could use two
// Messis). Include a constructor with default arguments, where only playerName is
// required, while position defaults to "Midfielder" and goalCount defaults to 10 (just to
// flex a little). Test the class by creating footballers, boosting their goal counts, and
// displaying their profiles like they’re about to win the Ballon d’Or!

class FootballPlayer{
    private:
        string playerName;
        string position;
        int goalCount;
    public:
        FootballPlayer() : playerName("Unknown Player"),position("Benchwarmer"),goalCount(0){}
        FootballPlayer(string pN,string p,int gC){
            playerName = pN;
            position = p;
            goalCount = gC;
        }
        FootballPlayer(FootballPlayer &other){
            playerName   = other.playerName;
            position = other.position;
            goalCount = other.goalCount;
        }
        FootballPlayer(string name){
            playerName = name;
            position = "Mid fielder";
            goalCount = 10;
        }

        void scoreGoal(int goals){
            goalCount += goals;
            cout << playerName << " score " << goals << " goal(s)" << endl;
            cout << endl;
        }

        void displayProfile(){
            cout << "Player Profile" << endl;
            cout << "Player Name: " << playerName << endl;
            cout << "Position: " << position << endl;
            cout << "Goal Count: " << goalCount << endl;
            cout << "This legend is ready for Ballon d'Or" << endl;
            cout << "-------------------------------------------" << endl;
        }

};

int main(){
    FootballPlayer player1;
    player1.displayProfile();

    FootballPlayer messi("Lionel Messi","Forward",820);
    messi.scoreGoal(5);
    messi.displayProfile();

    FootballPlayer messiClone(messi);
    messiClone.scoreGoal(2);
    messiClone.displayProfile();

    FootballPlayer deBruyne("deBruyne");
    deBruyne.displayProfile();

}
