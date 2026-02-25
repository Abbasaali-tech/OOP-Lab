#include "iostream"
using namespace std;

// Create a class BankAccount with:
// • static float interestRate
// • static function changeRate(float)
// • function showRate()
// Change interest rate once and show for all objects.

class BankAccount {
public:
    static float interestRate;

    static void changeRate(float r) {
        interestRate = r;
    }

    void showRate() {
        cout << "Interest Rate: " << interestRate << endl;
    }
};

float BankAccount::interestRate = 5.0;

int main() {
    BankAccount a1, a2;

    a1.showRate();
    BankAccount::changeRate(7.5);
    a2.showRate();
}