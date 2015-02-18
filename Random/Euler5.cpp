#include <iostream>
using namespace std;

void not5main()
{
	bool found = true;
	int smallest = 0;
	int i = 1;

	while (smallest == 0)
	{
		for (int prodCheck = 1; prodCheck <= 20; prodCheck++)
		{
			if (i%prodCheck != 0)
			{
				found = false;
				break;
			}
		}
		if (found == true)
		{
			smallest = i;
			cout << smallest << endl;
		}
		found = true;
		i++;
	}
}