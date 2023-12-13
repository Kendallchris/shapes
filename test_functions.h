/**
 * Title:   Lab 4 - A Vector of Shapes: test_functions.h
 *
 * Purpose: Declares the methods to be used in order to test the shape class
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */

#ifndef SHAPE_VECTOR_ASSIGNMENT_TEST_FUNCTIONS_H
#define SHAPE_VECTOR_ASSIGNMENT_TEST_FUNCTIONS_H

#include "shape.h"
#include "rectangle.h"
#include "square.h"
#include "ellipse.h"
#include "circle.h"
#include <vector>
using std::vector;

int CountSquares(const vector<Shape*>& list);
int CountRectangles(const vector<Shape*>& list);
int CountCircles(const vector<Shape*>& list);
int CountEllipses(const vector<Shape*>& list);
int CountSpecificEllipses(const vector<Shape*>& list);
int CountSpecificRectangles(const vector<Shape*>& list);
double GetEccentricity(const vector<Shape*>& list, unsigned int index, bool& error);


#endif //SHAPE_VECTOR_ASSIGNMENT_TEST_FUNCTIONS_H
