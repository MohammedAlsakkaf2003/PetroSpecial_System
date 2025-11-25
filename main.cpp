#include <iostream>
using namespace std;

int main() {
    int oil_stock = 100;
    int tire_stock = 50;
    int battery_stock = 20;
    
    int choice;
    int quantity;

    while (true) {
        cout << "\n=== Petro Special Inventory System v1.0 ===" << endl;
        cout << "Current Stock:" << endl;
        cout << "1. Oils: " << oil_stock << " cans" << endl;
        cout << "2. Tires: " << tire_stock << " units" << endl;
        cout << "3. Batteries: " << battery_stock << " units" << endl;
        cout << "0. Exit Program" << endl;
        cout << "---------------------------------------" << endl;
        
        cout << "Select a product (0-3): ";
        cin >> choice;

        if (choice == 0) {
            cout << "Closing System... Goodbye!" << endl;
            break;
        }
        else if (choice == 1) {
            cout << "You selected: Oils." << endl;
            cout << "Enter quantity (+/-): ";
            cin >> quantity;
            oil_stock = oil_stock + quantity;
            cout << "Updated Oil Stock: " << oil_stock << endl;
        } 
        else if (choice == 2) {
            cout << "You selected: Tires." << endl;
            cout << "Enter quantity (+/-): ";
            cin >> quantity;
            tire_stock = tire_stock + quantity;
            cout << "Updated Tire Stock: " << tire_stock << endl;
        } 
        else if (choice == 3) {
            cout << "You selected: Batteries." << endl;
            cout << "Enter quantity (+/-): ";
            cin >> quantity;
            battery_stock = battery_stock + quantity;
            cout << "Updated Battery Stock: " << battery_stock << endl;
        } 
        else {
            cout << "Invalid choice! Try again." << endl;
        }
    }

    return 0;
}