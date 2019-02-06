// Write a program that asks the user for the radius of a circle and
// Using a function, calculate the circumference/

#include "pch.h"
#include <iostream>
using namespace std;

const float PI = 3.14159265358979323846;
double calculateCircumference(double radius);

int main()
{
	int radius;
		double circumference;
	cout << "Please type a radius of a circle to find out the circumference." << endl;
	cin >> radius;
	circumference = calculateCircumference(radius);
    cout << "Answer is: " << radius << "" << endl; 
	return 0;
}

double calculateCircumference(double radius)

{
	double circumference;
	circumference = 2 * PI * radius;
	return circumference;

}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu