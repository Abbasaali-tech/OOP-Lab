#include "iostream"
using namespace std;

// Create a class called WeekDays that’s here to help you never lose track of what day it
// is (because let’s face it, it happens). This class has two private data members:
//     • Days – A string array with the seven glorious days of the week (Sunday to
//     Saturday).
//     • CurrentDay – An integer variable to track which day you’re currently living
//     in.
//     Now, implement the following constructors and member functions:
//     • Default Constructor – Fills up the Days array with the usual suspects: Sunday,
//     Monday, Tuesday... you get it.
//     • Parameterized Constructor – Takes an integer for CurrentDay. If the value
//     is greater than 6 (because there’s no Day 8), do some math magic with modulus
//     (%) to bring it back within range. For example, if the input is 8, 8 % 7 = 1, so
//     CurrentDay becomes Monday. Oh, and don’t forget to fill the Days array too.
//     • getCurrentDay – Returns the name of the current day. (Think
//     Days[CurrentDay].)
//     • getNextDay – Returns the name of tomorrow, because who doesn’t want to
//     know what day’s coming next?
//     • getPreviousDay – Returns yesterday’s name, just in case you’re feeling
//     nostalgic.
//     • getNthDayFromToday – Takes an integer N and tells you what day it will be
//     N days from now. For example, if today is Monday and N = 20, it’ll tell you
//     that it’s Sunday in 20 days. Useful for planning vacations or just confusing
//     yourself for fun!

class WeekDays{
    string Days[7];
    int currentDay;

    public:
        WeekDays(){
            Days[0] = "Monday"; 
            Days[1] = "Tuesday";
            Days[2] = "Wednesday"; 
            Days[3] = "Thursday";
            Days[4] = "Friday";
            Days[5] = "Saturday"; 
            Days[6] = "Sunday";
            currentDay = 0; 
        }

        WeekDays(int day){
            Days[0] = "Monday"; 
            Days[1] = "Tuesday";
            Days[2] = "Wednesday"; 
            Days[3] = "Thursday";
            Days[4] = "Friday";
            Days[5] = "Saturday"; 
            Days[6] = "Sunday";
            currentDay = day % 7; 
        }

        string getCurrentDay(){
            return Days[currentDay];
        }

        string getNextDay(){
            return Days[(currentDay + 1) % 7];
        }

        string getPreviousDay(){
            return Days[(currentDay + 6) % 7];
        }
        
        string getNthDayFromToday(int N){
            return Days[(currentDay + N) % 7];
        }
};

int main() {
    WeekDays wd1;           
    WeekDays wd2(3);        
    WeekDays wd3(15);       

    cout << "Current day wd1: " << wd1.getCurrentDay() << endl;
    cout << "Next day wd1: " << wd1.getNextDay() << endl;
    cout << "Previous day wd1: " << wd1.getPreviousDay() << endl;
    cout << "5th day from today wd1: " << wd1.getNthDayFromToday(5) << endl;

    cout << "\nCurrent day wd2: " << wd2.getCurrentDay() << endl;
    cout << "Next day wd2: " << wd2.getNextDay() << endl;
    cout << "Previous day wd2: " << wd2.getPreviousDay() << endl;
    cout << "20th day from today wd2: " << wd2.getNthDayFromToday(20) << endl;

    cout << "\nCurrent day wd3: " << wd3.getCurrentDay() << endl;
    cout << "Next day wd3: " << wd3.getNextDay() << endl;
    cout << "Previous day wd3: " << wd3.getPreviousDay() << endl;
    cout << "100th day from today wd3: " << wd3.getNthDayFromToday(100) << endl;

    return 0;
}