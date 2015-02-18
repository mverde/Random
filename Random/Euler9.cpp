#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void not9main()
{
	for (int a = 0; a < 1000; a++)
	{
		for (int b = 0; b < 1000; b++)
		{
			int cSq = (a * a) + (b * b);
			double c = sqrt(cSq);

			if (c - (int)c == 0)
			{
				if (a + b + c == 1000)
				{
					long int answer = a * b * c;
					cout << "Answer: " << answer << endl;
				}
			}
		}
	}
}
