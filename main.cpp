/************
* Created by Isaac on 9/10/2021.
*************/

/************
* File: main.cpp
*************/

#include "main.h"

int main(int argc, char** argv){
    //Circle object no parameters
    Circle myCircle1;
    //Circle object with radius parameter
    Circle myCircle2(5);

    //Sphere object no parameters
    Sphere mySphere1;
    //Sphere object with parameter
    Sphere mySphere2(5);

    //displaying objects with pass by reference
    displayCircle(&myCircle1);
    displayCircle(&myCircle2);

    displaySphere(&mySphere1);
    displaySphere(&mySphere2);

    return 0;
};