/**********************************************************************************
 * MurrrayProject11.cpp
 * Robyn Murray
 * Exercise 12.9 Deitel C++ Late Objects Red Book
 *
 * This defines the OvernightPackage class which inherits from the Package class.
 *********************************************************************************/

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include <stdio.h>
#include "Package.h"

class OvernightPackage : public Package
{
public:
    OvernightPackage(/*sender*/ const string &, const string &, const string &, const string &, const int &,
                  /*receiver*/ const string &, const string &, const string &, const string &, const int &,
                  /*package*/ double = 0.0, double = 0.0, double = 0.0);
    
    void setFeePerOunce (double);
    double getFeePerOunce() const;
    
    double calculateCost() const;               // calculate cost to ship
    void print() const;                         // print function for object vars
    
private:
    double feePerOunce;
    
};

#endif /* defined(__MurrayProject11__OvernightPackage__) */
