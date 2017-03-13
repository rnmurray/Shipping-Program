/**********************************************************************************
 * MurrrayProject11.cpp
 * Robyn Murray
 * Exercise 12.9 Deitel C++ Late Objects Red Book
 *
 * This is a test of the inheritance tree for Package, TwoDayPackage, and 
 * ThreeDayPackage.
 *********************************************************************************/
#include <iostream>
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <iomanip>
using namespace std;

int main()
{
    cout << "Welcome to the Shipping Program" << endl;
    
    // set floating point output precision
    cout << fixed << setprecision(2);
    
    cout << "\nFirst option is the standard package delivery service and has the following info:" << endl;
    // instantiate Package object
    Package box1("Robyn", "123 Pluto St", "Pluto", "Milky Way", 24680, "Luke", "PO BOX 1337", "Mos Eisley", "Tattoine", 34558, 55.5, 0.25);
    box1.print();
    double cost = box1.calculateCost();
    cout << "\nThe cost to send this package with standard shipping is: $" << cost << endl;
    
    cout << "\nSecond option is going for two day delivery and includes an added flat fee:" << endl;
    // instantiate TwoDayPackage object
    TwoDayPackage box2("Robyn", "123 Pluto St", "Pluto", "Milky Way", 24680, "Luke", "PO BOX 1337", "Mos Eisley", "Tattoine", 34558, 55.5, 0.25, 10.00);
    box2.print();
    double cost2 = box2.calculateCost();
    cout << "\nThe cost to send this package with two day shipping is: $" << cost2 << endl;
    
    cout << "\nThird option is going for overnight delivery and includes an additional fee per ounce:" << endl;
    // instantiate OvernightPackage object
    OvernightPackage box3("Robyn", "123 Pluto St", "Pluto", "Milky Way", 24680, "Luke", "PO BOX 1337", "Mos Eisley", "Tattoine", 34558, 55.5, 0.25, 1.00);
    box3.print();
    double cost3 = box3.calculateCost();
    cout << "\nThe cost to send this package overnight is: $" << cost3 << endl;
    
    cout << "\nEOP" << endl;
}
