// Assignment 2 Program 3
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int is_leap;

	for (is_leap)
	{

		cout << "Program will let you know if year entered is a leap year:";
		cin >> is_leap;

		if (is_leap % 4 != 0 && year % 400 != 0)
		{
			cout << "This is not a leap year" << endl;
		}
		else if (is_leap % 4 == 0 && is_leap 100 == 0)
		{
			cout << "This is a leap year" << endl;
		}
		else if (is_leap % 1800 == 0 && is_leap % 1900 == 0)
		{
			cout << "Is not a leap year" << endl;
		}
		else if (is_leap % 2000 == 0 && is_leap % 2400 == 0)
		{
			cout << "Is a leap year" << endl;
		}
		return 0;
	}
}