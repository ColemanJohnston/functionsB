//Name: Coleman Johnston
//Date: 13 Oct. 2015
//Description: Functions pass by reference practice.
#include<iostream>
#include<cassert>
#include<cmath>
using namespace std;

//functions to convert feet to inches.
double feet2Inches(double val);
void feetToInches(double&  val);

//functions to calculate area of a rectangle. 
double computeRectangle(double valA, double valB);
void computeArea (double valA, double valB, double& valC);

//function to calculate area and perimeter of a rectangle.
void computerArea (double valA, double valB, double& valArea, double& valPerimeter);

//function that returns the average and sum of the four parameters that are passed to it  
void  stats(double valA, double valB, double valC, double valD, double& vale, double& valF);

//function that the calculates area and perimeter of a circle.  The function receives one value, radius of type double, and returns the correct values
void calcAreaPerimeter(double radius, double& area, double& perimeter);

//function that the calculates area of a rectangle.  The function receives two values, length and width and returns the value;
double calcArea(double length, double width);

int main()
{
    const double E = 0.001;//epsilon
    
    assert(fabs(feet2Inches(3) - 36) < E);
    assert(fabs(feet2Inches(0) - 0) < E);
    assert(fabs(feet2Inches(-1.5) - (-18)) < E);
    
    double value;
    value = 3;
    feetToInches(value);
    assert(fabs(value - 36) <= E);
    value = 0;
    feetToInches(value);
    assert(fabs(value - 0) <= E);
    value = -1.5;
    feetToInches(value);
    assert(fabs(value - (-18)) <= E); 
    
    return 0;
}

double feet2Inches(double val)
{
    return val * 12;
}

void feetToInches(double&  val)
{
    val = val * 12;
    return;
}
