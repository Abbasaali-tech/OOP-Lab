#include <iostream>
using namespace std;

// Bank wants to track accounts and interest policy.
// Class Account:
    // • accountHolder
    // • balance
    // • static bankName
    // • static interestRate
    // • const function showBalance()
    // • function deposit()
    // Create 3 accounts and demonstrate:
    // • deposit
    // • static value sharing
    // • const function usage

class Account {
public:
    string accountHolder;
    float balance;
    static string bankName;
    static float interestRate;

    void deposit(float amount) {
        balance = balance + amount;
    }

    void showBalance() const {
        cout << accountHolder << " Balance: " << balance << endl;
    }
};

string Account::bankName = "MyBank";
float Account::interestRate = 5.0;

int main() {
    Account a1, a2, a3;

    a1.accountHolder = "Ali";
    a1.balance = 1000;

    a2.accountHolder = "Ahmed";
    a2.balance = 2000;

    a3.accountHolder = "Sara";
    a3.balance = 3000;

    a1.deposit(500);

    cout << Account::bankName << endl;
    cout << Account::interestRate << endl;

    a1.showBalance();
    a2.showBalance();
    a3.showBalance();
}