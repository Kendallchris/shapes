/**
 * Title:   Lab 4 - A Vector of Shapes: rectangle.cpp
 *
 * Purpose: Implements the class rectangle
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */

#include "rectangle.h"

/**
 * Constructor for the Rectangle class. Being a child of the Shape class, it will call upn the
 * construct of the Shape class, while assigning the passed variables to the protected data
 * declared in the Rectangle class. Output it cout by default according to the Shape class.
 * @param base the base of the Rectangle object as a double
 * @param length the length of the Rectangle object as a double
 * @param output the desired output stream
 */
Rectangle::Rectangle(double base, double length, ostream &output): Shape(output), _height(base), _length(length) {
    _output << "Rectangle Constructor" << endl;
}

/**
 * Destructor for the Rectangle class, should it be needed. This method overrides the parent class method.
 */
Rectangle::~Rectangle() {
    _output << "Rectangle Destructor" << endl;
}

/**
 * This method formats the data contained in the Rectangle object into a nice looking string and
 * returns that. This method overrides the parent class method.
 * @return the data values contained in the Rectangle object as a formatted string.
 */
string Rectangle::ToString() {
    stringstream ss;
    ss << "{Shape: Rectangle, Height: " << _height << ", Length: " << _length << "}";
    return ss.str();
}

/**
 * This method calculates and returns the value of the perimeter of the Rectangle object.
 * This method overrides the parent class method.
 * @return the perimeter of the rectangle object as a double.
 */
double Rectangle::Perimeter() {
    double perimeter = ((_length * 2) + (_height * 2));
    return perimeter;
}

/**
 * This method calculates and returns the value of the area of the Rectangle object. This method
 * overrides the parent class method.
 * @return the area of the rectangle object as a double.
 */
double Rectangle::Area() {
    double area = (_length * _height);
    return area;
}

/**
 * This method will expand the Rectangle object according to the passed ratio variable.
 * This method overrides the parent class method.
 * @param ratio the ratio for the Rectangle object to be expanded by (double).
 */
void Rectangle::Expand(const double &ratio) {
    _length = _length * ratio;
    _height = _height * ratio;
}
