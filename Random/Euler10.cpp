#include <iostream>
#include <ctime>
using namespace std;

bool isPrime(int num)
{
	if (num == 2 || num == 5)
	{
		return true;
	}

	else if (num % 10 == 1 || num % 10 == 3 || num % 10 == 7 || num % 10 == 9)
	{
		int upper = num;

		for (int lower = 3; lower < upper; lower += 2)
		{
			if (num % lower == 0)
			{
				return false;
			}
			else
			{
				upper = (num / lower) + 1;
			}
		}
		return true;
	}

	return false;
}

void not10main()
{
	int start_s = clock();

	long long sum = 2;
	int count = 1;

	for (int i = 3; i <= 2000000; i += 2)
	{
		if (isPrime(i))
		{
			//cout << "added " << i << endl;
			sum += i;
			count++;
		}
	}
	cout << "answer: " << sum << endl << "primes: " << count << endl;

	int stop_s = clock();
	cout << "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << endl;
}