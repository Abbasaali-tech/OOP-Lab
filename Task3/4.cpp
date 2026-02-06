#include "iostream"
using namespace std;

// Create a CricketPlayer class to represent the superstars (or struggling rookies) of the
// Pakistan cricket team, with attributes like name, jerseyNumber, and battingAverage—
// because every player needs something to brag about on Instagram. Use a parameterized
// constructor with the this keyword to avoid variable confusion, or worse, run-outs. Add
// a method improveAverage(runs) that magically boosts the batting average and returns
// the object for method chaining—because why stop at one record when you can break
// several? Create displayPlayerStats() to proudly show off the player’s details, complete
// with virtual commentary like, “This batting average is more consistent than Karachi’s
// weather!”
// To spice things up, add playMatch(runsScored) to update the batting average after each
// match, so players can experience the highs of centuries and the lows of golden ducks.
// Test it by creating players (Babar Azam, Muhammad Rizwan, Saim Ayub) like your
// own dream squad, making them score big, boosting averages as if they’re on fire, and
// then showing off their stats like they just hit six sixes in an over and became national
// heroes overnight!

class CricketPlayer{
    private: 
        string name;
        int jerseyNumber;
        float battingAverage;
        int totalRuns;
        int matchesPlayed;
    public:
        CricketPlayer(string name,int jerseyNumber,float battingAverage){
            this->name = name;
            this->jerseyNumber = jerseyNumber;
            this->battingAverage = battingAverage;
            totalRuns = 0;
            matchesPlayed = 0;
        }

        CricketPlayer& improveAverage(int runs){
            this->totalRuns += runs;
            this->matchesPlayed++;
            this->battingAverage = totalRuns / matchesPlayed;
            return *this;
        }

        void playMatch(int runsScored){
            totalRuns += runsScored;
            matchesPlayed++;
            battingAverage = totalRuns / matchesPlayed;

            cout << name << " scored " << runsScored << " in today's match" << endl;
            if (runsScored == 0)
            {
                cout << "Oh no!! Golden Duck" << endl;
            }
            else if (runsScored >= 100)
            {
                cout << "Sensational Century!" << endl;
            }
            else{
                cout << "Solid contribution to the team!" << endl;
            }
        }

        void displayPlayerStats(){
            cout << "Player: " << name << endl;
            cout << "Jersey Number: " << jerseyNumber << endl;
            cout << "Batting Average: " << battingAverage << endl;
            cout << "Total Runs: " << totalRuns << endl;
            cout << "Total Matches: " << matchesPlayed << endl;
            cout << "Commentary: This batting average is more consistent than Karachi's weather!" << endl;
            cout << "------------------------------------------------------------------------------------" << endl;
        }     
};

int main(){
    CricketPlayer babar("Babar Azam",56,55);
    CricketPlayer rizwan("Muhammad Rizwan",16,48);
    CricketPlayer saim("Saim Ayub",63,35);

    cout << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
    babar.playMatch(120);
    rizwan.playMatch(65);
    saim.playMatch(0);

    cout << endl;
    babar.improveAverage(50).improveAverage(70);
    rizwan.improveAverage(40);
    saim.improveAverage(95);

    babar.displayPlayerStats();
    rizwan.displayPlayerStats();
    saim.displayPlayerStats();
}