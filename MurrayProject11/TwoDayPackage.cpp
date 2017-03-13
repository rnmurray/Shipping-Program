/**********************************************************************************
 * MurrrayProject11.cpp
 * Robyn Murray
 * Exercise 12.9 Deitel C++ Late Objects Red Book
 *
 * This defines the public and private members of the TwoDayPackage class.
 *********************************************************************************/
#include "TwoDayPackage.h"
#include <iostream>
using namespace std;

// Constructor
TwoDayPackage::TwoDayPackage(/*sender*/ const string &sName, const string &sAddress, const string &sCity, const string &sState, const int &sZip,
                 /*receiver*/ const string &rName, const string &rAddress, const string &rCity, const string &rState, const int &rZip,
                 /*package*/ double w, double cost, double fee)
: Package(sName, sAddress, sCity, sState, sZip, rName, rAddress, rCity, rState, rZip, w, cost)
{
    setFlatFee(fee);
} // end TwoDayPackage constructor

// set flat fee and ensure positive number
void TwoDayPackage::setFlatFee(double fee)
{
    flatFee = (fee > 0.0) ? fee : 0.0;
} // end function setFlatFee

// return flat fee
double TwoDayPackage::getFlatFee() const
{
    return flatFee;
} // end function getFlatFee

// calculate shipping cost
double TwoDayPackage::calculateCost() const
{
    return getFlatFee() + Package::calculateCost();
} // end calculate cost

// print contents for TwoDayPackage object
void TwoDayPackage::print() const
{
    Package::print();
    cout << "2 Day Flat Fee: $" << getFlatFee() << endl;
} // end function print

