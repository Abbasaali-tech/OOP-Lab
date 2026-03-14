#include<iostream>
#include<string>
using namespace std;

// Imagine developing a comprehensive banking system simulator for a prominent financial
// institution. In this system, a base class called Account encapsulates essential data members
// such as accountNumber, balance, accountHolderName, and optionally accountType. It offers
// member functions like deposit(amount) to add funds, withdraw(amount) to remove funds
// with proper error checking, calculateInterest() to compute interest based on varying rules,
// printStatement() to output detailed transaction histories, and getAccountInfo() to retrieve
// general account details.
// Derived classes like SavingsAccount, CheckingAccount, and FixedDepositAccount extend
// this structure by incorporating specialized data members—such as interestRate and
// minimumBalance for SavingsAccount or maturityDate and fixedInterestRate for
// FixedDepositAccount. These derived classes override key functions like calculateInterest()
// and printStatement() to provide account-type-specific functionalities. Additionally, the
// withdraw() function is overridden in specific accounts to apply different transaction rules,
// ensuring that each account type follows realistic banking policies while maintaining
// polymorphic behavior.

class Account{
public:
    int accountNumber;
    float balance;
    string accountHolderName;
    string accountType;

    Account(int an, float b, string ahn, string at){
        accountNumber=an;
        balance=b;
        accountHolderName=ahn;
        accountType=at;
    }

    void deposit(float amount){
        balance=balance+amount;
        cout<<"Deposited: "<<amount<<endl;
    }

    void withdraw(float amount){
        if(amount>balance){
            cout<<"Insufficient balance!"<<endl;
        }else{
            balance=balance-amount;
            cout<<"Withdrawn: "<<amount<<endl;
        }
    }

    void calculateInterest(){
        cout<<"Interest calculation not defined for base account."<<endl;
    }

    void printStatement(){
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Holder: "<<accountHolderName<<endl;
        cout<<"Balance: "<<balance<<endl;
    }

    void getAccountInfo(){
        cout<<"Account Type: "<<accountType<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;
    }
};

class SavingsAccount: public Account{
public:
    float interestRate;
    float minimumBalance;

    SavingsAccount(int an, float b, string ahn, float ir, float mb): Account(an,b,ahn,"Savings"){
        interestRate=ir;
        minimumBalance=mb;
    }

    void withdraw(float amount){
        if(balance-amount<minimumBalance){
            cout<<"Cannot withdraw! Minimum balance required: "<<minimumBalance<<endl;
        }else{
            balance=balance-amount;
            cout<<"Withdrawn: "<<amount<<endl;
        }
    }

    void calculateInterest(){
        float interest=balance*interestRate/100;
        cout<<"Savings Interest: "<<interest<<endl;
    }

    void printStatement(){
        cout<<"--- Savings Account Statement ---"<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Holder: "<<accountHolderName<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"Interest Rate: "<<interestRate<<"%"<<endl;
        cout<<"Minimum Balance: "<<minimumBalance<<endl;
    }
};

class CheckingAccount: public Account{
public:
    CheckingAccount(int an, float b, string ahn): Account(an,b,ahn,"Checking"){
    }

    void withdraw(float amount){
        if(amount>balance){
            cout<<"Insufficient balance!"<<endl;
        }else{
            balance=balance-amount;
            cout<<"Withdrawn: "<<amount<<endl;
        }
    }

    void printStatement(){
        cout<<"--- Checking Account Statement ---"<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Holder: "<<accountHolderName<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

class FixedDepositAccount: public Account{
public:
    string maturityDate;
    float fixedInterestRate;

    FixedDepositAccount(int an, float b, string ahn, string md, float fir): Account(an,b,ahn,"Fixed Deposit"){
        maturityDate=md;
        fixedInterestRate=fir;
    }

    void calculateInterest(){
        float interest=balance*fixedInterestRate/100;
        cout<<"Fixed Deposit Interest: "<<interest<<endl;
    }

    void printStatement(){
        cout<<"--- Fixed Deposit Statement ---"<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Holder: "<<accountHolderName<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"Maturity Date: "<<maturityDate<<endl;
        cout<<"Fixed Interest Rate: "<<fixedInterestRate<<"%"<<endl;
    }
};

int main(){
    SavingsAccount sa(1001, 5000, "Ali", 5.0, 1000);
    sa.deposit(2000);
    sa.withdraw(500);
    sa.calculateInterest();
    sa.printStatement();

    cout<<endl;

    CheckingAccount ca(1002, 3000, "Sara");
    ca.withdraw(3200);
    ca.printStatement();

    cout<<endl;

    FixedDepositAccount fd(1003, 10000, "Ahmed", "2026-12-31", 8.5);
    fd.calculateInterest();
    fd.printStatement();
}
