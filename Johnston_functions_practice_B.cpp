//Name: Coleman Johnston
//Date: 13 Oct. 2015
//Description: Functions pass by reference practice.
#include<iostream>
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
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF);

//function that the calculates area and perimeter of a circle.  The function receives one value, radius of type double, and returns the correct values
void calcAreaPerimeter(double radius, double& area, double$ perimeter);

//function that the calculates area of a rectangle.  The function receives two values, length and width and returns the value;
double calcArea(double length, double width);

int main()
{
    return 0;
}
