/**********************************************************************************
 * MurrrayProject11.cpp
 * Robyn Murray
 * Exercise 12.9 Deitel C++ Late Objects Red Book
 *
 * This defines the Package class.
 *********************************************************************************/

#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
using namespace std;

class Package
{
public:
    Package(/*sender*/ const string &, const string &, const string &, const string &, const int &,
        /*receiver*/ const string &, const string &, const string &, const string &, const int &,
        /*package*/ double = 0.0, double = 0.0);
    
    void setSenderName(const string &);         // set senders name
    string getSenderName() const;               // get senders name
    
    void setSenderAddress(const string &);      // set senders address
    string getSenderAddress() const;            // get senders address
    
    void setSenderCity(const string &);         // set senders city
    string getSenderCity() const;               // get senders city
    
    void setSenderState(const string &);        // set senders state
    string getSenderState() const;              // get senders state
    
    void setSenderZip(const int &);             // set senders ZIP
    int getSenderZip() const;                   // get senders ZIP
    
    void setReceiverName(const string &);       // set receivers name
    string getReceiverName() const;             // get receivers name
    
    void setReceiverAddress(const string &);    // set receivers address
    string getReceiverAddress() const;          // get receivers address
    
    void setReceiverCity(const string &);       // set receivers city
    string getReceiverCity() const;             // get receivers city
    
    void setReceiverState(const string &);      // set receivers state
    string getReceiverState() const;            // get receivers state
    
    void setReceiverZip(const int &);           // set receivers ZIP
    int getReceiverZip() const;                 // get receivers ZIP
    
    void setWeight(double);                     // set package weight
    double getWeight() const;                   // get package weight
    
    void setCostPerOunce(double);               // set cost per ounce of package
    double getCostPerOunce() const;             // get cost per ounce of package
    
    double calculateCost() const;               // calculate cost to ship
    void print() const;                         // print function for object vars
    
private:
    // sender's info
    string senderName;
    string senderAddress;
    string senderCity;
    string senderState;
    int senderZip;
    
    // receiver's info
    string receiverName;
    string receiverAddress;
    string receiverCity;
    string receiverState;
    int receiverZip;
    
    // package info
    double weight;
    double costPerOunce;
    
}; // end class Package

#endif /* defined(__MurrayProject11__Package__) */
