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
void stats(double valA, double valB, double valC, double valD, double& valE, double& valF);

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
    
    double value, anotherVal;
    value = 3;
    feetToInches(value);
    assert(fabs(value - 36) < E);
    value = 0;
    feetToInches(value);
    assert(fabs(value - 0) < E);
    value = -1.5;
    feetToInches(value);
    assert(fabs(value - (-18)) < E); 
 
    assert(fabs(computeRectangle(1,3) - 3) < E);
    assert(fabs(computeRectangle(4,5) - 20) < E);
    assert(fabs(computeRectangle(0.5,6) - 3) < E);
    
    computeArea(1,3,value);
    assert(fabs(value - 3) < E);
    computeArea(4,5,value);
    assert(fabs(value - 20) < E);
    computeArea(0.5,6,value);
    assert(fabs(value - 3) < E);
    
    computerArea(1,2,value,anotherVal); //computerArea(height,width,area,perimeter)
    assert(fabs(value - 2) < E);
    assert(fabs(anotherVal - 6) < E);
    computerArea(3,4,value,anotherVal); 
    assert(fabs(value - 12) < E);
    assert(fabs(anotherVal - 14) < E);
    computerArea(0.5,6,value,anotherVal);
    assert(fabs(value - 3) < E);
    assert(fabs(anotherVal - 13) < E);
 
    stats(1,2,3,4,value,anotherVal); //stats(num,num,num,num,sum,avg)
    assert(fabs(value - 10) < E);
    assert(fabs(anotherVal - 2.5) < E); 
    stats(0,0,0,2,value,anotherVal); 
    assert(fabs(value - 2) < E);
    assert(fabs(anotherVal - 0.5) < E);
    
    //calcAreaPerimeter(rad,area,perimeter)
    calcAreaPerimeter(1,value,anotherVal);
    assert(fabs(value - 3.14) < E);
    assert(fabs(anotherVal - 6.28) < E);
    calcAreaPerimeter(.8,value,anotherVal);
    assert(fabs(value - 2.0096) < E);
    assert(fabs(anotherVal - 5.024) < E);
    calcAreaPerimeter(0,value,anotherVal);
    assert(fabs(value - 0) < E);
    assert(fabs(anotherVal - 0) < E);
    
    assert(fabs(calcArea(3,4) - 12) < E);
    assert(fabs(calcArea(.5,6) - 3) < E);
    assert(fabs(calcArea(-1,4) - 4) < E);    
 
    cout << "Ran to here!" << endl;
    
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

double computeRectangle(double valA, double valB)
{
    return(valA * valB);
}

void computeArea (double valA, double valB, double& valC)
{
    valC = valA * valB;
    return;
}

void computerArea (double valA, double valB, double& valArea, double& valPerimeter)
{
    valArea = valA * valB;
    valPerimeter = (2 * valA) + (2 * valB);
    return;
}
//function that returns the average and sum of the four parameters that are passed to it
void stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
    valE = valA + valB + valC + valD;
    valF = (valA + valB + valC + valD)/4.0; 
    return;       
}

//function that the calculates area and perimeter of a circle.  The function receives one value, radius of type double, and returns the correct values
void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
    area = 3.14 * pow(radius,2);   
    perimeter = 2 * 3.14 * radius;
    return;
}

double calcArea(double length, double width)
{
    return fabs(length * width);
}
