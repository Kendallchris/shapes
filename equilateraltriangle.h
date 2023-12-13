/**
 * Title:   Lab 4 - A Vector of Shapes: equilateraltriangle.h
 *
 * Purpose: Declares the class EquilateralTriangle, making it a child of Triangle
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */

#ifndef SHAPE_VECTOR_ASSIGNMENT_EQUILATERALTRIANGLE_H
#define SHAPE_VECTOR_ASSIGNMENT_EQUILATERALTRIANGLE_H

#include "triangle.h"

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double side, ostream& output);
    ~EquilateralTriangle() override;
    string ToString() override;
};

#endif //SHAPE_VECTOR_ASSIGNMENT_EQUILATERALTRIANGLE_H
