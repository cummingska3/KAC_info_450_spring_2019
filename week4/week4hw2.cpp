// Write a program that inputs the names of the students in the class (to a max of 30 names)
//Store them in a 2 - dimensional array
//Then outputs the class list to the console when the user enters an empty string(by pressing enter)
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char str[30][50];
	int row;
	int col;
	
	for (row =0; row < 2; row++){
		for (col = 0; col < 3; col++) {
			cout << "Students, please enter your full name" << endl;
		}
	}

	return 0;
}

