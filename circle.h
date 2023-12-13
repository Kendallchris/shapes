/**
 * Title:   Lab 4 - A Vector of Shapes: circle.h
 *
 * Purpose: Declares the class circle, making it a child of the ellipse class
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */

#ifndef SHAPE_VECTOR_ASSIGNMENT_CIRCLE_H
#define SHAPE_VECTOR_ASSIGNMENT_CIRCLE_H

#include "ellipse.h"
#include <iostream>
using std::ostream;
using std::cout;

class Circle : public Ellipse {
public:
    Circle(double radius, ostream& output);
    ~Circle() override;
    string ToString() override;
    double Perimeter() override;
};


#endif //SHAPE_VECTOR_ASSIGNMENT_CIRCLE_H
