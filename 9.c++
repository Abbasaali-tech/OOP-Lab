#include <iostream>
#include <string>
using namespace std;

// You are tasked with building a simple product management system for an online store that
// does the following stuff:
//     a) Create a function that allows the addition of a new product to the system. The function
//     should take parameters such as product name, price, quantity, and any other relevant
//     details.
//     b) Implement a function that takes a product ID as input and displays detailed information
//     about the product, including its name, price, quantity in stock, and any other relevant
//     details.
//     c) Design a function that enables the update of product information. It should take a
//     product ID as well as the new details (e.g., updated price, quantity, etc.) and modify the
//     existing product's information accordingly.
//     d) Create a function that removes a product from the system based on its product ID.
//     Ensure that the inventory is updated after the removal.

struct Product {
    int id;
    string name;
    int price;
    int qty;
};

Product arr[100];
int countP = 0;

void addProduct() {
    arr[countP].id = countP + 1;
    cin.ignore();
    getline(cin, arr[countP].name);
    cin >> arr[countP].price;
    cin >> arr[countP].qty;
    countP++;
}

void showProduct(int id) {
    for (int i = 0; i < countP; i++) {
        if (arr[i].id == id) {
            cout << arr[i].id << endl;
            cout << arr[i].name << endl;
            cout << arr[i].price << endl;
            cout << arr[i].qty << endl;
        }
    }
}

void updateProduct(int id) {
    for (int i = 0; i < countP; i++) {
        if (arr[i].id == id) {
            cin.ignore();
            getline(cin, arr[i].name);
            cin >> arr[i].price;
            cin >> arr[i].qty;
        }
    }
}

void removeProduct(int id) {
    for (int i = 0; i < countP; i++) {
        if (arr[i].id == id) {
            for (int j = i; j < countP - 1; j++) {
                arr[j] = arr[j + 1];
            }
            countP--;
        }
    }
}

int main() {
    addProduct();
    showProduct(1);
    updateProduct(1);
    removeProduct(1);
    return 0;
}
