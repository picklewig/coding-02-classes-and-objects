/**********
* Created by Isaac on 9/10/2021.
***********/

#ifndef CLASSES_CIRCLE_H
#define CLASSES_CIRCLE_H

#define MIN 0
#define PI 3.14

class Circle{
    public:
        //constructors
        Circle();
        Circle(int);
        //destructor
        ~Circle();

        //getters
        int getRadius();
        double getArea();

        //setter
        void setRadius(int);
    private:
        int radius;
};

#endif //CLASSES_CIRCLE_H
