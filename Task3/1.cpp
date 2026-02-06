#include "iostream"
using namespace std;

// Design a Book class for a library system that’s in desperate need of organization, with
// attributes title, author, and price—because even imaginary books need royalties.
// Implement a default constructor that sets the blandest values possible (think "Untitled,"
// "Anonymous," and free), a parameterized constructor for when you want your book to
// have an actual identity, a copy constructor for duplicating your masterpiece, and a
// constructor with default arguments where you only need to provide the title, while
// author defaults to "Unknown" and price to 0.0 (clearly a bestseller). Test your creation
// by spawning book objects every way imaginable and proudly showing off their details
// like they’re competing in a talent show.

class Book{
    string title;
    string author;
    double price;

    public:
    Book(){
        title = "Untitled";
        author = "Anonymus";
        price = 0.0;
    }
    Book(string t,string a,double p){
        title = t;
        author = a;
        price = p;
    }
    Book(Book &b){
        title = b.title;
        author = b.author;
        price = b.price;
    }

    void showDetail(){
        cout << "Title: " << title << ", Author: " << author << ", Price: $" << price << endl;
        cout << endl;
        cout << "====================================================" << endl;
        cout << endl;
    }

};

int main(){
    Book b1;
    Book b2("1984", "George Orwell", 15.99);
    Book b3(b2);

    cout << "====================================================" << endl;
    cout << endl;
    b1.showDetail();
    b2.showDetail();
    b3.showDetail();
}