#include  "iostream"
using namespace std;

// You are hired as a billing manager at K-Electric. Your task is to calculate the monthly bill
// according to the units consumed. Write a program to input electricity unit charge and calculate the
// total electricity bill according to the given condition:
//     For first 50 units Rs. 0.50/unit
//     For next 100 units Rs. 0.75/unit
//     For next 100 units Rs. 1.20/unit
//     For unit above 250 Rs. 1.50/unit
//     An additional surcharge of 20% is added to the bill.

int main(){
    int units;
    float totalBill = 0.0;

    cout << "Enter the number of units consumed: ";
    cin >> units;

    if (units < 0)
    {
        cout << "Units enterd is Invalid!!" << endl;
        return 0;
    }
    
    if (units > 50)
    {
        totalBill += 0.5 * 50;
        units -= 50;
    }
    else{
        totalBill += 0.5 * units;
        units = 0;
    }

    if (units > 0)
    {
        if (units > 100)
        {
            totalBill += 0.75 * 100;
            units -= 100;
        }
        else{
            totalBill += 0.75 * units;
            units = 0;
        }
    }

    if (units > 0)
    {
        if (units > 100)
        {
            totalBill += 1.2 * 100;
            units -= 100;
        }
        else{
            totalBill += 1.2 * units;
            units = 0;
        }
    }

    if (units > 0)
    {
        totalBill += 1.5 * units;
    }
    
    totalBill += totalBill * 0.2;
    cout << "Total Bill: " << totalBill << endl;
    return 0;
}
