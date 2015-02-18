#include <iostream>
using namespace std;

void not2main()
{
	int i = 1, last, last2, current, sum = 2;

	for (current = 0; current < 4000000;)
	{
		if (i == 1)
		{
			last2 = 1;
			last = 2;
			i++;
			continue;
		}
		current = last + last2;
		if (current % 2 == 0)
		{
			sum += current;
		}
		last2 = last;
		last = current;
	}
	cout << sum << endl;
}