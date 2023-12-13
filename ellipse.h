/**
 * Title:   Lab 4 - A Vector of Shapes: ellipse.h
 *
 * Purpose: Declares the class ellipse, making it a child of the shape class
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */

#ifndef SHAPE_VECTOR_ASSIGNMENT_ELLIPSE_H
#define SHAPE_VECTOR_ASSIGNMENT_ELLIPSE_H

#include "shape.h"
#include <iostream>
using std::ostream;
using std::cout;

class Ellipse : public Shape {
protected:
    double _radiusA;
    double _radiusB;
public:
    Ellipse(double radiusA, double radiusB, ostream& output);
    ~Ellipse() override;
    string ToString() override;
    double Perimeter() override;
    double Area() override;
    void Expand(const double& ratio) override;
    double Eccentricity() const;
};


#endif //SHAPE_VECTOR_ASSIGNMENT_ELLIPSE_H
