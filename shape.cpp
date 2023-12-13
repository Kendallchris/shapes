/**
 * Title:   Lab 4 - A Vector of Shapes: shape.cpp
 *
 * Purpose: Implements the class shape
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */

#include "shape.h"

/**
 * Constructor for the base Shape class.
 * @param output the output stream (cout by default)
 */
Shape::Shape(ostream &output): _output(output) {
    _output << "Shape Constructor" << endl;
}

/**
 * Destructor for the Shape class, should it be needed. This is also overwritten by child
 * classes (virtual method).
 */
Shape::~Shape() {
    _output << "Shape Destructor" << endl;
}

/**
 * Establishes the ToString method for the Shape class, allowing child classes to overwrite it.
 * This method is virtual.
 * @return a string showing the hex number of the data location of the object calling the
 * method.
 */
string Shape::ToString() {
    stringstream ss;
    ss << "Shape @ " << this;
    return ss.str();
}

/**
 * This method is virtual pure, meaning it is essentially just a place holder allowing child
 * methods to overwrite it.
 * @return 0.0
 */
double Shape::Perimeter() {
    return 0.0;
}

/**
 * This method is virtual pure, meaning it is essentially just a place holder allowing child
 * methods to overwrite it.
 * @return 0.0
 */
double Shape::Area() {
    return 0.0;
}

/**
 * This method is virtual pure, meaning it is essentially just a place holder allowing child
 * methods to overwrite it.
 * @param ratio the ratio to expand the shape by.
 */
void Shape::Expand(const double &ratio) {

}
