/**
 * Title:   Lab 4 - A Vector of Shapes: rectangle.h
 *
 * Purpose: Declares the class rectangle, making it a child of the shape class
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */

#ifndef SHAPE_VECTOR_ASSIGNMENT_RECTANGLE_H
#define SHAPE_VECTOR_ASSIGNMENT_RECTANGLE_H

#include "shape.h"
#include <iostream>
using std::ostream;
using std::cout;

class Rectangle : public Shape {
protected:
    double _length;
    double _height;
public:
    Rectangle(double base, double length, ostream& output);
    ~Rectangle() override;
    string ToString() override;
    double Perimeter() override;
    double Area() override;
    void Expand(const double& ratio) override;
};


#endif //SHAPE_VECTOR_ASSIGNMENT_RECTANGLE_H
