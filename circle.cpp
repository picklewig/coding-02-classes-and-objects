/**********
* Created by Isaac on 9/10/2021.
***********/

/************
* File: circle.cpp
*************/

#include "circle.h"

Circle::Circle(){
    setRadius(MIN);
}

Circle::Circle(int r){
    setRadius(r);
}

Circle::~Circle(){}

int Circle::getRadius(){
    return radius;
}

double Circle::getArea(){
    return PI * radius * radius;
}

void Circle::setRadius(int r){
    if(r > MIN){
        radius = r;
    }
    else{
        radius = MIN;
    }
}