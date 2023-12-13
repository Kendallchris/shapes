/**
 * Title:   Lab 4 - A Vector of Shapes: triangle.cpp
 *
 * Purpose: Implements the class Triangle
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */

#include "triangle.h"

/**
 * Constructor for the Triangle class. Being a child of the Shape class, it will call the Shape
 * constructor before assigning the passed values to _side1, _side2, and _side3.
 * @param side1 double
 * @param side2 double
 * @param side3 double
 * @param output default is cout according to Shape
 */
Triangle::Triangle(double side1, double side2, double side3, ostream &output): Shape(output), _side1(side1), _side2(side2), _side3(side3) {
    _output << "Triangle Constructor" << endl;
}

/**
 * Destructor for the Triangle class
 */
Triangle::~Triangle() {
    _output << "Triangle Destructor" << endl;
}

/**
 * Returns a string representation of the data contained within the Triangle object as a pretty, formatted
 * string. This method overrides the parent class method.
 * @return the data values contained in the Triangle object as a string.
 */
string Triangle::ToString() {
    stringstream ss;
    ss << "{Shape: Triangle, Side 1: " << _side1 << ", Side 2: " << _side2 << ", Side 3: " << _side3 << "}";
    return ss.str();
}

/**
 * This method calculates the perimeter of the triangle and returns it as a double. This method overrides the
 * parent method.
 * @return perimeter which is a double holding the value of the perimeter of the triangle
 */
double Triangle::Perimeter() {
    double perimeter = _side1 + _side2 + _side3;
    return perimeter;
}

/**
 * This method calculates the area of the triangle and returns the value as a double. This method overrides the
 * parent method.
 * @return area which is a double representing the area of the triangle
 */
double Triangle::Area() {
    double area = 0.0;
    double semiPerimeter = (_side1 + _side2 + _side3) / 2;
    area = sqrt(semiPerimeter(semiPerimeter - _side1)(semiPerimeter - _side2)(semiPerimeter - _side3));
    return area;
}

/**
 * This method expands the size of the values contained by the triangle based on the parameter ratio, which it
 * multiplies each side value by. It overrides the parent method.
 * @param ratio double
 */
void Triangle::Expand(const double &ratio) {
    _side1 = _side1 * ratio;
    _side2 = _side2 * ratio;
    _side3 = _side3 * ratio;
}
