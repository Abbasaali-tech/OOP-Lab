#include "iostream"
using namespace std;

// Create a class Book with:
// • title
// • price
// Create array of 5 books and display them using loop.

class Book {
public:
    string title;
    float price;
};

int main() {
    Book books[5];

    for(int i = 0; i < 5; i++) {
        cout << "Enter title: ";
        cin >> books[i].title;
        cout << "Enter price: ";
        cin >> books[i].price;
    }

    for(int i = 0; i < 5; i++) {
        cout << books[i].title << " - " << books[i].price << endl;
    }
}
