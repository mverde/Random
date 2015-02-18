#include <iostream>
using namespace std;

void not6main()
{
	long long int sum = 0, sum2 = 0;

	for (int i = 1; i <= 100; i++)
	{
		sum += i*i;
	}
	for (int i = 1; i <= 100; i++)
	{
		sum2 += i;
	}
	cout << (sum2*sum2) - sum << endl;
}