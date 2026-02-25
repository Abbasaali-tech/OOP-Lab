#include <iostream>
using namespace std;

// A bank manages customer accounts and branches.
// Requirements:
// • Create a Branch class:
// o branchName
// o city
// • Create an Account class:
// o accountHolder
// o balance
// o Has-A relationship with Branch (Aggregation)
// • Use array of Account objects
// • Use static string bankName
// • Use static float interestRate
// • Use const function showBalance()
// • Use static function to update interest rate for all accounts
// Hint: Branch exists even if accounts are closed.

class Branch {
public:
    string branchName;
    string city;
};

class Account {
public:
    string accountHolder;
    float balance;
    Branch* branch;
    static string bankName;
    static float interestRate;

    void showBalance() const {
        cout << accountHolder << " "
             << balance << endl;
    }

    static void changeInterest(float r) {
        interestRate = r;
    }
};

string Account::bankName = "NationalBank";
float Account::interestRate = 5.0;

int main() {
    Branch b1;
    b1.branchName = "Main";
    b1.city = "Karachi";

    Account a[2];

    a[0].accountHolder = "Ali";
    a[0].balance = 1000;
    a[0].branch = &b1;

    a[1].accountHolder = "Ahmed";
    a[1].balance = 2000;
    a[1].branch = &b1;

    Account::changeInterest(8.0);

    for(int i=0;i<2;i++) {
        a[i].showBalance();
    }

    cout << Account::bankName << endl;
    cout << Account::interestRate << endl;
}