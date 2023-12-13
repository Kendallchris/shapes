/**
 * Title:   Lab 4 - A Vector of Shapes: shape.h
 *
 * Purpose: Declares the class shape
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */

#ifndef SHAPE_VECTOR_ASSIGNMENT_SHAPE_H
#define SHAPE_VECTOR_ASSIGNMENT_SHAPE_H

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using std::stringstream;
using std::ostream;
using std::cout;
using std::string;
using std::endl;

class Shape {
protected:
    ostream& _output;
public:
    explicit Shape(ostream& output = cout);
    virtual ~Shape();
    virtual string ToString();
    virtual double Perimeter() = 0;
    virtual double Area() = 0;
    virtual void Expand(const double& ratio) = 0;
};


#endif //SHAPE_VECTOR_ASSIGNMENT_SHAPE_H
