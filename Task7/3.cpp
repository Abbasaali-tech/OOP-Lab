#include<iostream>
#include<string>
using namespace std;

// Envision creating a robust application for a global finance firm that needs to handle and
// compute multiple currencies with real-time conversion capabilities. This system is built on a
// base class called Currency, which contains core data members such as amount, currencyCode,
// currencySymbol, and an optional exchangeRate. It provides functions like convertToBase()
// for converting the amount into a common base currency, convertTo(targetCurrency) for
// converting between currencies, and displayCurrency() for showcasing currency details.
// Derived classes like Dollar, Euro, and Rupee extend this foundation by introducing currency-
// specific details and overriding convertToBase() and displayCurrency() to reflect the exchange
// rates and regional currency formats dynamically.

class Currency{
public:
    float amount;
    string currencyCode;
    string currencySymbol;
    float exchangeRate;

    Currency(float a, string cc, string cs, float er){
        amount=a;
        currencyCode=cc;
        currencySymbol=cs;
        exchangeRate=er;
    }

    void convertToBase(){
        float base=amount*exchangeRate;
        cout<<"Base Currency Value: "<<base<<endl;
    }

    void convertTo(Currency target){
        float converted=(amount*exchangeRate)/target.exchangeRate;
        cout<<"Converted Amount: "<<target.currencySymbol<<converted<<endl;
    }

    void displayCurrency(){
        cout<<"Currency: "<<currencyCode<<endl;
        cout<<"Symbol: "<<currencySymbol<<endl;
        cout<<"Amount: "<<amount<<endl;
        cout<<"Exchange Rate: "<<exchangeRate<<endl;
    }
};

class Dollar: public Currency{
public:
    Dollar(float a): Currency(a,"USD","$",1.0){
    }

    void convertToBase(){
        cout<<"Dollar is base currency. Amount: $"<<amount<<endl;
    }

    void displayCurrency(){
        cout<<"--- Dollar ---"<<endl;
        cout<<"Amount: $"<<amount<<endl;
        cout<<"Exchange Rate: 1.0 (Base)"<<endl;
    }
};

class Euro: public Currency{
public:
    Euro(float a): Currency(a,"EUR","E",1.08){
    }

    void convertToBase(){
        float base=amount*exchangeRate;
        cout<<"Euro to Dollar: $"<<base<<endl;
    }

    void displayCurrency(){
        cout<<"--- Euro ---"<<endl;
        cout<<"Amount: E"<<amount<<endl;
        cout<<"Exchange Rate to USD: "<<exchangeRate<<endl;
    }
};

class Rupee: public Currency{
public:
    Rupee(float a): Currency(a,"PKR","Rs",0.0036){
    }

    void convertToBase(){
        float base=amount*exchangeRate;
        cout<<"Rupee to Dollar: $"<<base<<endl;
    }

    void displayCurrency(){
        cout<<"--- Rupee ---"<<endl;
        cout<<"Amount: Rs"<<amount<<endl;
        cout<<"Exchange Rate to USD: "<<exchangeRate<<endl;
    }
};

int main(){
    Dollar d(100);
    d.displayCurrency();
    d.convertToBase();

    cout<<endl;

    Euro e(50);
    e.displayCurrency();
    e.convertToBase();

    cout<<endl;

    Rupee r(10000);
    r.displayCurrency();
    r.convertToBase();

    cout<<endl;

    Euro e2(200);
    Dollar d2(0);
    e2.convertTo(d2);
}