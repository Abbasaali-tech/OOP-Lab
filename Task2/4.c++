#include "iostream"
#include "string"
using namespace std;

// Design a class for a StationeryShop that maintains a list of all items it sells, stored as an array
// of strings, along with a corresponding list of item prices, stored as an array of doubles. Create
// a menu-driven program that allows the shop owner to perform the following operations: add
// items and their prices, retrieve the list of items, edit item prices, and view all items along with
// their prices. Additionally, implement functionality to generate a receipt that the shopkeeper
// can share with customers. The receipt should be created only after the shopkeeper inputs the
// items purchased by the customer along with their quantities.

class StationeryShop{
    string items[100];
    double prices[100];
    int itemCount;

    public:
        StationeryShop(){
            itemCount = 0;
        }

        void addItem(string name, double price){
            items[itemCount] = name;
            prices[itemCount] = price;
            itemCount++;
        }
        void editItemPrice(string name, double price){
            bool found = false;
            for(int i = 0; i < itemCount;i++){
                if (items[i] == name){
                    prices[i] = price;
                    found = true;
                    break;
                }
            }
            if (!found){
                cout << "Item not found" << endl;
            }
            else{
                cout << "Item updated successfully" << endl;
            }
        }
        void viewItems(){
            for(int i = 0; i < itemCount;i++){
                cout << items[i] << " Rs" << prices[i] << endl;
            }
        }
        void generateReceipt(){
            int n;
            int quantity;
            float total = 0;
            bool found = false;
            string itemName;

            cout << "Enter number of items to purchase: " << endl;
            cin >> n;
            cout << "\n----- RECEIPT -----\n";
            for(int i = 0;i < n;i++){
                cout << "Enter item name: ";
                cin >> itemName;
                cout << "Enter quantity: ";
                cin >> quantity;

                for(int j = 0; j < itemCount;j++){
                    if(items[j] == itemName){
                        float cost = prices[j] * quantity;
                        total += cost;
                        cout << "Item: " << items[j] << " Quantity: " << quantity << " Cost: " << cost << endl;
                        found = true;
                        break;
                    }
                }
                if (!found){
                    cout << "Item not found" << endl;
                }
            }
            cout << "-------------------\n";
            cout << "Total Amount: Rs. " << total << endl;
        }
};

int main(){
    StationeryShop shop;
    int choice;
    string name;
    double price;
    
    do{
        cout << "\n----- MENU ----\n";
        cout << "1. Add Item\n";
        cout << "2. Edit Item Price\n";
        cout << "3. View Items\n";
        cout << "4. Generate Receipt\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice){
            case 1:
                cout << "Enter item name: ";
                cin >> name;
                cout << "Enter item price: ";
                cin >> price;
                shop.addItem(name, price);
                break;
            case 2:
                cout << "Enter item name: ";
                cin >> name;
                cout << "Enter new price: ";
                cin >> price;
                shop.editItemPrice(name, price);
                break;
            case 3:
                shop.viewItems();
                break;
            case 4:
                shop.generateReceipt();
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }while(choice != 5);
}