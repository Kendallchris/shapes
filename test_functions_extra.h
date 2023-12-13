/**
 * Title:   Lab 4 - A Vector of Shapes: test_functions_extra.h
 *
 * Purpose: Declares the methods to be used in order to test the shape class extra credit
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */

#ifndef SHAPE_VECTOR_ASSIGNMENT_TEST_FUNCTIONS_EXTRA_H
#define SHAPE_VECTOR_ASSIGNMENT_TEST_FUNCTIONS_EXTRA_H

#include "shape.h"
#include "rectangle.h"
#include "square.h"
#include "ellipse.h"
#include "circle.h"
#include "triangle.h"
#include "equilateraltriangle.h"
#include <vector>
using std::vector;

int CountTriangles(const vector<Shape*>& list);
int CountEquilateralTriangles(const vector<Shape*>& list);
int CountSpecificTriangles(const vector<Shape*>& list);

#endif //SHAPE_VECTOR_ASSIGNMENT_TEST_FUNCTIONS_EXTRA_H
