/**********
* Created by Isaac on 9/10/2021.
***********/

/************
* File: sphere.cpp
*************/

#include "sphere.h"

Sphere::Sphere(){
    setRadius(MIN);
}

Sphere::Sphere(int r){
    setRadius(r);
}

Sphere::~Sphere(){}

double Sphere::getVolume(){
    return (1.33) * PI * getRadius() * getRadius() * getRadius();
}

double Sphere::getArea(){
    return 4 * PI * getRadius() * getRadius();
}