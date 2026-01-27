#include "iostream"
using namespace std;

// Imagine you are tasked with creating a program to manage a library's book inventory. Each
// book has attributes such as title, author, publication year, and genre. Design a struct that
// effectively represents a book as a real-world entity. Then, write a C++ program that utilizes
// this struct to demonstrate the creation, modification, and display of book information.
//     a) Extend the program to manage multiple books in an array.
//     b) Implement a function to search for a book by title or author.
//     c) Allow the user to input new books and update existing book information
//     interactively.

typedef struct
{
    string title;
    string author;
    string genre;
    int publicationYear;
} Book;

void displayBook (Book b){
    cout << "The title of book: " << b.title << endl;
    cout << "The author: " << b.author << endl;
    cout << "The genre: " << b.genre << endl;
    cout << "THe publication of the year: " << b.publicationYear << endl;
}

void searchBook(Book books[], int count){

    string key;
    cout << "Enter the title/author of the book: ";
    getline(cin,key);

    bool found = false;
    for (int i = 0; i < count; i++)
    {
        if (books[i].title == key || books[i].author == key)
        {
            displayBook(books[i]);
            found = true;
        }
    }
        
    if (!found)
    {
        cout << "Book not found!" << endl;
    }
}

void updateBook(Book books[], int count) {
    string title;
    cout << "\nEnter title of book to update: ";
    getline(cin, title);

    for (int i = 0; i < count; i++) {
        if (books[i].title == title) {
            cout << "Enter new author: ";
            getline(cin, books[i].author);

            cout << "Enter new publication year: ";
            cin >> books[i]. publicationYear;
            cin.ignore();

            cout << "Enter new genre: ";
            getline(cin, books[i].genre);

            cout << "Book updated successfully!\n";
            return;
        }
    }

    cout << "Book not found.\n";
}

int main() {
    Book books[100];
    int count = 0;
    int choice;

    do {
        cout << "\n--- Library Menu ---\n";
        cout << "1. Add new book\n";
        cout << "2. Display all books\n";
        cout << "3. Search book\n";
        cout << "4. Update book\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            cout << "\nEnter title: ";
            getline(cin, books[count].title);

            cout << "Enter author: ";
            getline(cin, books[count].author);

            cout << "Enter publication year: ";
            cin >> books[count].publicationYear;
            cin.ignore();

            cout << "Enter genre: ";
            getline(cin, books[count].genre);

            count++;
            cout << "Book added successfully!\n";
        }
        else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                displayBook(books[i]);
            }
        }
        else if (choice == 3) {
            searchBook(books, count);
        }
        else if (choice == 4) {
            updateBook(books, count);
        }

    } while (choice != 5);

    return 0;
}
