/**
 * Title:   Lab 4 - A Vector of Shapes: triangle.h
 *
 * Purpose: Declares the class Triangle, making it a child of Shape
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */

#ifndef SHAPE_VECTOR_ASSIGNMENT_TRIANGLE_H
#define SHAPE_VECTOR_ASSIGNMENT_TRIANGLE_H

#include "shape.h"
#include <iostream>
using std::ostream;
using std::cout;

class Triangle : public Shape {
protected:
    double _side1;
    double _side2;
    double _side3;
public:
    Triangle(double side1, double side2, double side3, ostream& output);
    ~Triangle() override;
    string ToString() override;
    double Perimeter() override;
    double Area() override;
    void Expand(const double& ratio) override;
};

#endif //SHAPE_VECTOR_ASSIGNMENT_TRIANGLE_H
