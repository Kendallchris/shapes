/**
 * Title:   Lab 4 - A Vector of Shapes: circle.cpp
 *
 * Purpose: Implements the class circle
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */

#include "circle.h"

/**
 * Constructor for the Circle class. Being a child of the Ellipse class, it will call the Ellipse
 * constructor.
 * @param radius the radius of the circle object as a double
 * @param output the desired output stream (cout is default according to Shape parent class)
 */
Circle::Circle(double radius, ostream &output): Ellipse(radius, radius, output){
    _output << "Circle Constructor" << endl;
}

/**
 * Destructor for the Circle class, should it be needed. This method overrides the parent class method.
 */
Circle::~Circle() {
    _output << "Circle Destructor" << endl;
}

/**
 * Returns a string representation of the data contained within the Circle object as a pretty, formatted
 * string. This method overrides the parent class method.
 * @return the data values contained in the circle object as a string.
 */
string Circle::ToString() {
    stringstream ss;
    ss << "{Shape: Circle, {Shape: Ellipse, Radius A: " << _radiusA << ", Radius B: " << _radiusB << "}}";
    return ss.str();
}

/**
 * This method calculates and returns the value of the perimeter of the Circle object as a double.
 * This method overrides the parent class method.
 * @return the perimeter of the circle object as a double.
 */
double Circle::Perimeter() {
    double perimeter = (2 * M_PI * _radiusB);
    return perimeter;
}
