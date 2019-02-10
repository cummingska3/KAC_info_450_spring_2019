// Write a program that reads a set of 10 whole numbers from the user into an array.
//Once read in, it calculates the mean and the standard deviation of the numbers then displays the results to the console.
//Find the mean(the simple average of the numbers)
//Then, for each number, subtract the mean and square the result.
//Then, work out the mean of those squared differences.
//Take the square root of that, and we're done!
//

#include "pch.h"
#include <iostream>
using namespace std; 

int main()
{
	int i;
	int list[10] = 0;
	double total=0;
	double mean=0;
	double new_mean=0;
	double std_dev=0;
	double sqrt=0;
	
	for (i = 0; i < 10; i++)
	{
		cout << "Please input 10 numbers in order to find out the mean and square root of the set" << endl;
		cin >> list[i];
		total += list[i];

	}
		//find mean 
		mean = total / 10;
		//std deviation
		std_dev += pow(list[i] - mean, 2);
		//mean of new result
		new_mean = (std_dev + list[i]) / 10;
	
	cout << "Your original mean is" << mean << endl;
	cout << "The standard deviation of this mean is" << std_dev << endl;
	cout << "The subtracted mean from each number squared is" << sqrt << endl;
	cout << "Now, the mean of this new result is" << new_mean << endl;
	return 0;
}
