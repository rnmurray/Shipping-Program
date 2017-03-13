/**********************************************************************************
 * MurrrayProject11.cpp
 * Robyn Murray
 * Exercise 12.9 Deitel C++ Late Objects Red Book
 *
 * This defines the public and private members of the Package class.
 *********************************************************************************/

#include "Package.h"
#include <iostream>
using namespace std;

// Constructor
Package::Package(/*sender*/ const string &sName, const string &sAddress, const string &sCity, const string &sState, const int &sZip,
                 /*receiver*/ const string &rName, const string &rAddress, const string &rCity, const string &rState, const int &rZip,
                 /*package*/ double w, double cost)
    : senderName(sName), senderAddress(sAddress), senderCity(sCity), senderState(sState), senderZip(sZip),
    receiverName(rName), receiverAddress(rAddress), receiverCity(rCity), receiverState(rState), receiverZip(rZip)
{
    setWeight(w);           // validate weight
    setCostPerOunce(cost);  // validate cost per ounce
} // end Package constructor

/*********************************************************************************/
//                          SENDER FUNCTIONS

// set sender name
void Package::setSenderName( const string &sName)
{
    senderName = sName;
} // end function setSenderName

// return sender name
string Package::getSenderName() const
{
    return senderName;
} // end function getSenderName


// set sender Address
void Package::setSenderAddress(const string &sAddress)
{
    senderAddress = sAddress;
} // end function setSenderAddress

// return sender address
string Package::getSenderAddress() const
{
    return senderAddress;
} // end function getSenderAddress


// set sender city
void Package::setSenderCity(const string &sCity)
{
    senderCity = sCity;
} // end function setSenderCity

// return sender city
string Package::getSenderCity() const
{
    return senderCity;
} // end function getSenderCity


// set sender state
void Package::setSenderState(const string &sState)
{
    senderState = sState;
} // end function setSenderState

// return sender state
string Package::getSenderState() const
{
    return senderState;
} // end function getSenderState


// set sender Zip
void Package::setSenderZip(const int &sZip)
{
    senderZip = sZip;
} // end function setSenderZip

// return sender Zip
int Package::getSenderZip() const
{
    return senderZip;
} // end function getSenderZip

/*********************************************************************************/
//                          RECEIVER FUNCTIONS

// set receiver name
void Package::setReceiverName( const string &rName)
{
    receiverName = rName;
} // end function setReceiverName

// return receiver name
string Package::getReceiverName() const
{
    return receiverName;
} // end function getReceiverName


// set receiver Address
void Package::setReceiverAddress(const string &rAddress)
{
    receiverAddress = rAddress;
} // end function setReceiverAddress

// return receiver address
string Package::getReceiverAddress() const
{
    return receiverAddress;
} // end function getReceiverAddress


// set receiver city
void Package::setReceiverCity(const string &rCity)
{
    receiverCity = rCity;
} // end function setReceiverCity

// return receiver city
string Package::getReceiverCity() const
{
    return receiverCity;
} // end function getReceiverCity


// set receiver state
void Package::setReceiverState(const string &rState)
{
    receiverState = rState;
} // end function setReceiverState

// return receiver state
string Package::getReceiverState() const
{
    return receiverState;
} // end function getReceiverState


// set receiver Zip
void Package::setReceiverZip(const int &rZip)
{
    receiverZip = rZip;
} // end function setReceiverZip

// return receiver Zip
int Package::getReceiverZip() const
{
    return receiverZip;
} // end function getReceiverZip

/*********************************************************************************/
//                          PACKAGE FUNCTIONS

// set package weight and validate for positive
void Package::setWeight(double w)
{
    weight = (w > 0.0 ) ? w : 0.0;
} // end function setWeight

// return package weight
double Package::getWeight() const
{
    return weight;
} // end function getWeight

// set cost per ounce of package and validate for positive
void Package::setCostPerOunce(double cost)
{
    costPerOunce = (cost > 0.0) ? cost : 0.0;
} // end function setCostPerOunce

// return cost per ounce of package
double Package::getCostPerOunce() const
{
    return costPerOunce;
} // end function getCostPerOunce

/*********************************************************************************/
//                          OTHER FUNCTIONS

// calculate cost of shipping
double Package::calculateCost() const
{
    return getWeight() * getCostPerOunce();
} // end function calculateCost

// print contents of object
void Package::print() const
{
    cout << "\nSender's Information\n";
    cout << "Sender Name: " << getSenderName() << endl;
    cout << "Sender Address: " << getSenderAddress() << endl;
    cout << "Sender City: " << getSenderCity() << endl;
    cout << "Sender State: " << getSenderState() << endl;
    cout << "Sender Zip: " << getSenderZip() << endl;
    cout << "\nReceiver's Information\n";
    cout << "Receiver Name: " << getReceiverName() << endl;
    cout << "Receiver Address: " << getReceiverAddress() << endl;
    cout << "Receiver City: " << getReceiverCity() << endl;
    cout << "Receiver State: " << getReceiverState() << endl;
    cout << "Receiver Zip: " << getReceiverZip() << endl;
    cout << "\nPackage's Information\n";
    cout << "Package Weight: " << getWeight() << " oz." << endl;
    cout << "Package Cost Per Ounce: $" << getCostPerOunce() << endl;
} // end function print





