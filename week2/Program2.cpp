// Assignment 2 Program 2
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	int i = 0;
	bool prime = true;

	cout << "Please put in a positive integer to discover if its prime: ";
	cin >> x;

	for (i = 2; i <= x / 2; ++i)
	{
		if (x % i == 0)
		{
			prime = false;
			break;
		}
	}
	if (prime)
	{
		cout << "Your result is a prime number" << endl;
	}
	else
	{
		cout << "Your result is not a prime number" << endl;
	}
	return 0;
}

