/**********
* Author: Isaac Shepherd
 * defines class structure for sphere
 * only includes circle.h
***********/

/************
* File: sphere.h
*************/

#ifndef CLASSES_SPHERE_H
#define CLASSES_SPHERE_H

#include "circle.h"

class Sphere : public Circle{
    public:
        //constructors
        Sphere();
        Sphere(int);
        //destructor
        ~Sphere();

        //getters
        double getVolume();
        double getArea();
};

#endif //CLASSES_SPHERE_H
