#include <iostream>
using namespace std;

void not7main()
{
	int primeCount = 0, i = 2;
	bool isPrime = true;

	while (primeCount < 10001)
	{
		if ((i - 5) % 10 != 0 || i == 5)
		{
			for (long long int j = 2; j <= i / 2; j++)
			{
				if (i%j == 0)
				{
					isPrime = false;
					break;
				}
			}
			if (isPrime == true)
			{
				primeCount++;
			}
			if (primeCount == 10001)
			{
				cout << i << endl;
			}
			isPrime = true;
		}
		i++;
	}
}