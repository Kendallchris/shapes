/**
 * Title:   Lab 4 - A Vector of Shapes: test_functions_extra.cpp
 *
 * Purpose: Defines the methods to be used in order to test the shape class extra credit
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */

#include "test_functions_extra.h"

/**
 * This method navigates the passed vector counting the number of Triangle objects (including its
 * child elements if it has them)
 * @param list the pointer to the list of pointers to shape objects.
 * @return how many Triangles are in the vector as an int
 */
int CountTriangles(const vector<Shape*> &list) {
    int count = 0;
    for (auto i : list) {
        auto* t = dynamic_cast<Triangle*>(i);
        if (t != nullptr){
            count++;
        }
    }
    return count;
}

/**
 * This method navigates the passed vector counting the number of EquilateralTriangle objects (including its
 * child elements if it has them)
 * @param list the pointer to the list of pointers to shape objects.
 * @return how many EquilateralTriangles are in the vector as an int
 */
int CountEquilateralTriangles(const vector<Shape*> &list) {
    int count = 0;
    for (auto i : list) {
        auto* t = dynamic_cast<EquilateralTriangle*>(i);
        if (t != nullptr){
            count++;
        }
    }
    return count;
}

/**
 * This method navigates the passed vector counting the number of Triangle objects and Triangle
 * objects only (no child elements).
 * @param list the pointer to the list of pointers to shape objects.
 * @return how many Triangle exclusive objects are in the vector, as an int
 */
int CountSpecificTriangles(const vector<Shape*> &list) {
    int numChildren = CountEquilateralTriangles(list);
    int count = CountTriangles(list);

    count -= numChildren;
    return count;
}
