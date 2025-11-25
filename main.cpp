#include <iostream>
#include <string>
using namespace std;

int main() {
    int oil_stock = 100;
    int tire_stock = 50;
    int battery_stock = 20;
    
    int choice;

    cout << "=== Petro Special Inventory System v1.0 ===" << endl;
    cout << "Welcome, Eng. Mohammed." << endl;
    cout << "---------------------------------------" << endl;
    cout << "Current Stock:" << endl;
    cout << "1. Oils: " << oil_stock << " cans" << endl;
    cout << "2. Tires: " << tire_stock << " units" << endl;
    cout << "3. Batteries: " << battery_stock << " units" << endl;
    cout << "---------------------------------------" << endl;
    
    cout << "Please select a product to manage (1-3): ";
    cin >> choice;

    if (choice == 1) {
        cout << "You selected: Oils." << endl;
    } else if (choice == 2) {
        cout << "You selected: Tires." << endl;
    } else if (choice == 3) {
        cout << "You selected: Batteries." << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}