/**
 * Title:   Lab 4 - A Vector of Shapes: test_functions.cpp
 *
 * Purpose: Implements the methods declared in test_functions.h
 * Class:   CSC 2330 Fall 2022
 * Author:  Chris Kendall
 */


#include "test_functions.h"

/**
 * This method navigates the passed vector counting the number of Square objects (including its
 * child elements if it has them)
 * @param list the pointer to the list of pointers to shape objects.
 * @returns how many squares are in the vector as an int
 */
int CountSquares(const vector<Shape*>& list){
    int count = 0;
    for (auto i : list) {
        auto* t = dynamic_cast<Square*>(i);
        if (t != nullptr){
            count++;
        }
    }
    return count;
}
/**
 * This method navigates the passed vector counting the number of Rectangle objects (including its
 * child elements if it has them)
 * @param list the pointer to the list of pointers to shape objects.
 * @return how many rectangles are in the vector as an int
 */
int CountRectangles(const vector<Shape*>& list){
    int count = 0;
    for (auto i : list) {
        auto* t = dynamic_cast<Rectangle*>(i);
        if (t != nullptr){
            count++;
        }
    }
    return count;
}
/**
 * This method navigates the passed vector counting the number of Circle objects (including its
 * child elements if it has them)
 * @param list the pointer to the list of pointers to shape objects.
 * @return how many circles are in the vector as an int
 */
int CountCircles(const vector<Shape*>& list){
    int count = 0;
    for (auto i : list) {
        auto* t = dynamic_cast<Circle*>(i);
        if (t != nullptr){
            count++;
        }
    }
    return count;
}
/**
 * This method navigates the passed vector counting the number of Ellipse objects (including its
 * child elements if it has them)
 * @param list the pointer to the list of pointers to shape objects.
 * @return how many ellipses are in the vector as an int
 */
int CountEllipses(const vector<Shape*>& list){
    int count = 0;
    for (auto i : list) {
        auto* t = dynamic_cast<Ellipse*>(i);
        if (t != nullptr){
            count++;
        }
    }
    return count;
}
/**
 * This method navigates the passed vector counting the number of Ellipse objects and Ellipse
 * objects only (no child elements).
 * @param list the pointer to the list of pointers to shape objects.
 * @return how many ellipses are in the vector as an int
 */
int CountSpecificEllipses(const vector<Shape*>& list){
    int numChildren = CountCircles(list);
    int count = CountEllipses(list);

    count -= numChildren;
    return count;
}
/**
 * This method navigates the passed vector counting the number of Rectangle objects and Rectangle
 * objects only (no child elements).
 * @param list the pointer to the list of pointers to shape objects.
 * @return how many rectangles are in the vector as an int
 */
int CountSpecificRectangles(const vector<Shape*>& list){
    int numChildren = CountSquares(list);
    int count = CountRectangles(list);

    count -= numChildren;
    return count;
}
/**
 * This method accepts the required parameters to look at an object within a vector list of Shape pointers
 * and checks whether or not the object is an Ellipse or child of Ellipse. It then either calculates the
 * eccentricity of the object or returns -1 and sets the bool (error) to true.
 * @param list the pointer to the list of pointers to shape objects.
 * @param index the unsigned int index on the vector list of the desired object
 * @param error a bool telling whether or not the requested object is a valid object to get the
 * eccentricity for.
 * @return if a valid object, its eccentricity. Otherwise -1 and sets error to true.
 */

double GetEccentricity(const vector<Shape*>& list, unsigned int index, bool& error){
    double eccentricity;
    auto* t = dynamic_cast<Ellipse*>(list.at(index));
    if (t != nullptr) {
        eccentricity = t->Eccentricity();
        error = false;
    } else {
        eccentricity = -1;
        error = true;
    }
    return eccentricity;
}
