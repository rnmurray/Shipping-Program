/**********************************************************************************
 * MurrrayProject11.cpp
 * Robyn Murray
 * Exercise 12.9 Deitel C++ Late Objects Red Book
 *
 * This defines the TwoDayPackage class which inherits from the Package class.
 *********************************************************************************/

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <string>
#include "Package.h"
using namespace std;

class TwoDayPackage : public Package
{
public:
    TwoDayPackage(/*sender*/ const string &, const string &, const string &, const string &, const int &,
            /*receiver*/ const string &, const string &, const string &, const string &, const int &,
            /*package*/ double = 0.0, double = 0.0, double = 0.0);
    
    void setFlatFee (double);
    double getFlatFee() const;
    
    double calculateCost() const;               // calculate cost to ship
    void print() const;                         // print function for object vars
    
private:
    double flatFee;
};

#endif /* defined(__MurrayProject11__TwoDayPackage__) */
