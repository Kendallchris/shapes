/**
 * Title:   Lab 4 - A Vector of Shapes: ellipse.cpp
 *
 * Purpose: Implements the class ellipse
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */

#include "ellipse.h"

/**
 * Constructor for the Ellipse class. Will call upon the constructor for the parent, Shape, class
 * assigning output to it.
 * @param radiusA the first radius of the ellipse
 * @param radiusB the second radius of the ellipse
 * @param output the desired output stream (cout is default according to the Shape class)
 */
Ellipse::Ellipse(double radiusA, double radiusB, ostream &output): Shape(output), _radiusA(radiusA), _radiusB(radiusB) {
    //Ellipse = new Shape(radiusA, radiusB, output);
    _output << "Ellipse Constructor" << endl;
}

/**
 * Destructor for the Ellipse class should it be needed. This method overrides the parent.
 */
Ellipse::~Ellipse() {
    _output << "Ellipse Destructor" << endl;
}

/**
 * This method will return the values of the Ellipse object as a string in a pretty format.
 * This method overrides the parent.
 * @return a string representation of the Ellipse.
 */
string Ellipse::ToString() {
    stringstream ss;
    ss << "{Shape: Ellipse, Radius A: " << _radiusA << ", Radius B: " << _radiusB << "}";
    return ss.str();
}

/**
 * This method will return the value of the perimeter of the Ellipse object as a double.
 * This method overrides the parent.
 * @return the perimeter of the Ellipse as a double
 */
double Ellipse::Perimeter() {
    double h = ((_radiusA - _radiusB) * (_radiusA - _radiusB)) / ((_radiusA + _radiusB) * (_radiusA + _radiusB));
    double perimeter = (M_PI * (_radiusA + _radiusB)) * (1 + ((3 * h) / (10 + sqrt(4 - 3 * h))));
    return perimeter;
}

/**
 * This method will return the value of the area of the Ellipse object as a double.
 * This method overrides the parent.
 * @return the area of the Ellipse as a double.
 */
double Ellipse::Area() {
    double area = (M_PI * (_radiusA * _radiusB));
    return area;
}

/**
 * This method will expand the Ellipse according to the passed ratio param.
 * This method overrides the parent.
 * @param ratio the ratio to expand the Ellipse by.
 */
void Ellipse::Expand(const double &ratio) {
    _radiusA = _radiusA * ratio;
    _radiusB = _radiusB * ratio;
}

/**
 * This method calculates and returns the value of the eccentricity of the Ellipse object.
 * This method is constant.
 * @return the eccentricity of the Ellipse.
 */
double Ellipse::Eccentricity() const {
    double eccentricity;
    if (_radiusA > _radiusB) {
        eccentricity = (sqrt((_radiusA * _radiusA) - (_radiusB * _radiusB)) / _radiusA);
    } else {
        eccentricity = (sqrt((_radiusB * _radiusB) - (_radiusA * _radiusA)) / _radiusB);
    }
    return eccentricity;
}
