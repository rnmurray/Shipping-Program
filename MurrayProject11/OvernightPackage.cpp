/**********************************************************************************
 * MurrrayProject11.cpp
 * Robyn Murray
 * Exercise 12.9 Deitel C++ Late Objects Red Book
 *
 * This defines the public and private members of the OvernightPackage class.
 *********************************************************************************/

#include "OvernightPackage.h"
#include <iostream>
using namespace std;

// Constructor
OvernightPackage::OvernightPackage(/*sender*/ const string &sName, const string &sAddress, const string &sCity, const string &sState, const int &sZip,
                             /*receiver*/ const string &rName, const string &rAddress, const string &rCity, const string &rState, const int &rZip,
                             /*package*/ double w, double cost, double fee)
: Package(sName, sAddress, sCity, sState, sZip, rName, rAddress, rCity, rState, rZip, w, cost)
{
    setFeePerOunce(fee);
} // end OvernightPackage constructor

// set flat fee per ounce and ensure positive number
void OvernightPackage::setFeePerOunce(double fee)
{
    feePerOunce = (fee > 0.0) ? fee : 0.0;
} // end function setFlatFee

// return flat fee per ounce
double OvernightPackage::getFeePerOunce() const
{
    return feePerOunce;
} // end function getFlatFee

// calculate shipping cost
double OvernightPackage::calculateCost() const
{
    return (getFeePerOunce() + Package::getCostPerOunce()) * Package::getWeight();
} // end calculate cost

// print contents for TwoDayPackage object
void OvernightPackage::print() const
{
    Package::print();
    cout << "Overnight Additional Fee Per Ounce: $" << getFeePerOunce() << endl;
} // end function print
