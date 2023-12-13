/**
 * Title:   Lab 4 - A Vector of Shapes: square.cpp
 *
 * Purpose: Implements the class square
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */

#include "square.h"

/**
 * Constructor for the Square class. Being a child of the Rectangle class, it will call upon the
 * Rectangle constructor, passing the length variable as both the length and height of the rectangle, hence
 * the definition of a square. Output is cout by default but is passed in case the user wants to change the
 * output stream.
 * @param length a double representing the length, as well as height, of the Square object.
 * @param output the desired output stream.
 */
Square::Square(double length, ostream& output): Rectangle(length, length, output) {
    _output << "Square Constructor" << endl;
}

/**
 * Destructor for the Square class, should it be needed. This method overrides the parent class method.
 */
Square::~Square() {
    _output << "Square Destructor" << endl;
}

/**
 * This method formats the data contained by the Square object into a pretty looking string and returns it
 * for the user. This method overrides the parent class method.
 * @return the data values contained by the Square object in a formatted string.
 */
string Square::ToString() {
    stringstream ss;
    ss << "{Shape: Square, {Shape: Rectangle, Height: " << _height << ", Length: " << _length << "}}";
    return ss.str();
}
