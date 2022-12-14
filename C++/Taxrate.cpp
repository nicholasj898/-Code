/*----------------------------Taxrate.cpp--------------------------------------------------------------
|  Author: Nicholas Jones                                                                             |
|  Purpose: Simple program to calculate taxrate                                                       | 
|  Dependencies: Standard C++                                                                         |
|  Known Bugs: N/A                                                                                    |
|  Licensing Information: You are free to use or extend this project for educational purposes         |
------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int items;
double cost;
double taxrate;

int main () {
    
    cout << "Enter the number of items " << endl;
    cin  >> items;
    cout << "Enter the cost of the items " << endl;
    cin  >> cost;
    cout << "Enter the taxrate " << endl;
    cin  >> taxrate;
    
    double subtotal = items * cost;
    double tax = items * cost * taxrate;
    cout << "Quantity: " << items << endl;
    cout << "Cost of items: $" << cost << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Tax: $" << subtotal * taxrate << endl;
    cout << "Total: $" << subtotal + tax << endl;
    return 0;
}