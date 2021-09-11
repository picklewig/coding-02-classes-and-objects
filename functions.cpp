/**********
* Author: Isaac Shepherd
 * defines established prototypes for display functions
***********/

/************
* File: functions.cpp
*************/

#include "functions.h"

void displayCircle(Circle *myCircle){
    cout << myCircle->getRadius() << endl;
    cout << myCircle->getArea() << endl << endl;
}

void displaySphere(Sphere *mySphere){
    cout << mySphere->getRadius() << endl;
    cout << mySphere->getVolume() << endl;
    cout << mySphere->getArea() << endl << endl;
}