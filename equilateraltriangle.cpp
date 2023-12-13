/**
 * Title:   Lab 4 - A Vector of Shapes: equilateraltriangle.cpp
 *
 * Purpose: Implements the class EquilateralTriangle
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */

#include "equilateraltriangle.h"

/**
 * Constructor for the EquilateralTriangle class. Being a child of the Triangle class, it will call the Triangle
 * constructor, passing the variable, side, as all three side parameters, per the definition of an equilateral
 * triangle.
 * @param side double
 * @param output default is cout according to Shape
 */
EquilateralTriangle::EquilateralTriangle(double side, ostream &output): Triangle(side, side, side, output) {
    _output << "EquilateralTriangle Constructor" << endl;
}

/**
 * Destructor for the EquilateralTriangle class.
 */
EquilateralTriangle::~EquilateralTriangle() {
    _output << "EquilateralTriangle Destructor" << endl;
}

/**
 * Returns a string representation of the data contained within the EquilateralTriangle object as a pretty, formatted
 * string. This method overrides the parent class method.
 * @return the data values contained in the EquilateralTriangle object as a string.
 */
string EquilateralTriangle::ToString() {
    stringstream ss;
    ss << "{Shape: EquilateralTriangle, {Shape: Triangle, Side 1: " << _side1 << ", Side 2: " << _side2 << ", Side 3: " << _side3 << "}}";
    return ss.str();
}
