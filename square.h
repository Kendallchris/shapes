/**
 * Title:   Lab 4 - A Vector of Shapes: square.h
 *
 * Purpose: Declares the class square, making it a child of the rectangle class
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */

#ifndef SHAPE_VECTOR_ASSIGNMENT_SQUARE_H
#define SHAPE_VECTOR_ASSIGNMENT_SQUARE_H

#include "rectangle.h"
#include <iostream>
using std::ostream;
using std::cout;

class Square : public Rectangle {
public:
    Square(double length, ostream& output);
    ~Square() override;
    string ToString() override;
};


#endif //SHAPE_VECTOR_ASSIGNMENT_SQUARE_H
