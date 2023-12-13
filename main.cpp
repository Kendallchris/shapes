#include <iostream>
#include <sstream>
#include <vector>
#include <iomanip>
#include <cmath>

#include "shape.h"
#include "rectangle.h"
#include "square.h"
#include "ellipse.h"
#include "circle.h"
#include "test_functions.h"

using std::cout;
using std::endl;
using std::vector;
using std::stringstream;
using std::fixed;
using std::setw;
using std::left;

// *******************************************************************************************
// DO NOT MODIFY THE CODE BELOW
// When you do the assignment the compilation errors below should disappear
// *******************************************************************************************


int Test();
void Test(bool condition, const char* message, unsigned int& passedTests);
bool CompareDouble(double a, double b);

int main() {
    Test();
    cout << "= = = END OF MAIN = = =" << endl << endl;
    return 0;
}


int Test(){
    unsigned int passedTests = 0;
    stringstream output;
    vector<Shape*> shapes;
    // Insert 10 Shapes
    shapes.push_back(new Square(1, output));
    Test(output.str() == "Shape Constructor\nRectangle Constructor\nSquare Constructor\n", "Square Constructor", passedTests);
    output.str("");

    shapes.push_back(new Circle(1, output));
    Test(output.str() == "Shape Constructor\nEllipse Constructor\nCircle Constructor\n", "Circle Constructor", passedTests);
    output.str("");

    shapes.push_back(new Ellipse(2, 4, output));
    Test(output.str() == "Shape Constructor\nEllipse Constructor\n", "Ellipse Constructor", passedTests);
    output.str("");

    shapes.push_back(new Rectangle(2, 5, output));
    Test(output.str() == "Shape Constructor\nRectangle Constructor\n", "Rectangle Constructor", passedTests);
    output.str("");

    shapes.push_back(new Circle(10, output));
    Test(output.str() == "Shape Constructor\nEllipse Constructor\nCircle Constructor\n", "Circle Constructor", passedTests);
    output.str("");

    shapes.push_back(new Square(4, output));
    Test(output.str() == "Shape Constructor\nRectangle Constructor\nSquare Constructor\n", "Square Constructor", passedTests);
    output.str("");


    shapes.push_back(new Rectangle(4, 5, output));
    Test(output.str() == "Shape Constructor\nRectangle Constructor\n", "Rectangle Constructor", passedTests);
    output.str("");

    shapes.push_back(new Circle(2, output));
    Test(output.str() == "Shape Constructor\nEllipse Constructor\nCircle Constructor\n", "Circle Constructor", passedTests);
    output.str("");

    shapes.push_back(new Ellipse(5, 1, output));
    Test(output.str() == "Shape Constructor\nEllipse Constructor\n", "Ellipse Constructor", passedTests);
    output.str("");

    shapes.push_back(new Ellipse(1, 5, output));
    Test(output.str() == "Shape Constructor\nEllipse Constructor\n", "Ellipse Constructor", passedTests);
    output.str("");

    Test(CountEllipses(shapes) == 6, "Count Ellipses", passedTests);
    Test(CountCircles(shapes) == 3, "Count Circles", passedTests);
    Test(CountRectangles(shapes) == 4, "Count Rectangles", passedTests);
    Test(CountSquares(shapes) == 2, "Count Squares", passedTests);
    Test(CountSpecificEllipses(shapes) == 3, "Count Specific Ellipses", passedTests);
    Test(CountSpecificRectangles(shapes) == 2, "Count Specific Rectangles", passedTests);

    bool error;
    double ecc;

    ecc = GetEccentricity(shapes, 0, error);
    Test(error, "Calculate Eccentricity #1", passedTests);

    ecc = GetEccentricity(shapes, 1, error);
    Test(!error, "Calculate Eccentricity #2.1", passedTests);
    Test(CompareDouble(ecc, 0), "Calculate Eccentricity #2.2", passedTests);

    ecc = GetEccentricity(shapes, 2, error);
    Test(!error, "Calculate Eccentricity #3.1", passedTests);
    Test(CompareDouble(ecc, 0.866025), "Calculate Eccentricity #3.2", passedTests);

    ecc = GetEccentricity(shapes, 3, error);
    Test(error, "Calculate Eccentricity #4", passedTests);

    ecc = GetEccentricity(shapes, 4, error);
    Test(!error, "Calculate Eccentricity #5.1", passedTests);
    Test(CompareDouble(ecc, 0), "Calculate Eccentricity #5.2", passedTests);

    ecc = GetEccentricity(shapes, 5, error);
    Test(error, "Calculate Eccentricity #6", passedTests);

    ecc = GetEccentricity(shapes, 6, error);
    Test(error, "Calculate Eccentricity #7", passedTests);

    ecc = GetEccentricity(shapes, 7, error);
    Test(!error, "Calculate Eccentricity #8.1", passedTests);
    Test(CompareDouble(ecc, 0), "Calculate Eccentricity #8.2", passedTests);

    ecc = GetEccentricity(shapes, 8, error);
    Test(!error, "Calculate Eccentricity #9.1", passedTests);
    Test(CompareDouble(ecc, 0.979796), "Calculate Eccentricity #9.2", passedTests);

    ecc = GetEccentricity(shapes, 9, error);
    Test(!error, "Calculate Eccentricity #10.1", passedTests);
    Test(CompareDouble(ecc, 0.979796), "Calculate Eccentricity #10.2", passedTests);

    /*
     *  DEALLOCATING MEMORY
     */

    delete shapes.at(0);
    Test(output.str() == "Square Destructor\nRectangle Destructor\nShape Destructor\n", "Square Destructor", passedTests);
    output.str("");

    delete shapes.at(1);
    Test(output.str() == "Circle Destructor\nEllipse Destructor\nShape Destructor\n", "Circle Destructor", passedTests);
    output.str("");

    delete shapes.at(2);
    Test(output.str() == "Ellipse Destructor\nShape Destructor\n", "Ellipse Destructor", passedTests);
    output.str("");

    delete shapes.at(3);
    Test(output.str() == "Rectangle Destructor\nShape Destructor\n", "Rectangle Destructor", passedTests);
    output.str("");

    delete shapes.at(4);
    Test(output.str() == "Circle Destructor\nEllipse Destructor\nShape Destructor\n", "Circle Destructor", passedTests);
    output.str("");

    delete shapes.at(5);
    Test(output.str() == "Square Destructor\nRectangle Destructor\nShape Destructor\n", "Square Destructor", passedTests);
    output.str("");

    delete shapes.at(6);
    Test(output.str() == "Rectangle Destructor\nShape Destructor\n", "Rectangle Destructor", passedTests);
    output.str("");

    delete shapes.at(7);
    Test(output.str() == "Circle Destructor\nEllipse Destructor\nShape Destructor\n", "Circle Destructor", passedTests);
    output.str("");

    delete shapes.at(8);
    Test(output.str() == "Ellipse Destructor\nShape Destructor\n", "Ellipse Destructor", passedTests);
    output.str("");

    delete shapes.at(9);
    Test(output.str() == "Ellipse Destructor\nShape Destructor\n", "Ellipse Destructor", passedTests);
    output.str("");

    return passedTests;
}



void Test(bool condition, const char* message, unsigned int& passedTests){
    if (condition){
        cout << "TEST PASSED (" << left << setw(40) << message << ") Total Passed: " << ++passedTests << endl;
    }else{
        cout << "TEST FAILED (" << message << ")" << endl;
    }
}
/**
 * Compares two doubles to check if they are "equal"
 * @param a one double
 * @param b the other double
 * @return true if the difference between a and b is less than 1e-6
 */
bool CompareDouble(double a, double b){
    return abs(a - b) < 1e-6;
}
