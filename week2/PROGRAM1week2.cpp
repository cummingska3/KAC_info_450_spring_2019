// Program 1 homework assignment
//

#include "pch.h"
#include <iostream>
using namespace std;

int main() // print pos numbers and their square root
{
	int x;

	cout << "Enter any positive non-zero number to view it squared" << endl;
	cin >> x;
		
		
	while (x >= 0)
	{
		if (x > 0)
		{
			cout << "x * 0.5" << endl;
			cin >> x;
		}
		else
		{
			cout << "The number is not positive." << endl;
			cin >> x;
		}
	}

return 0;
}
