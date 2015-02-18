#include <iostream>
using namespace std;

int reverse(int number)
{
	int sumRev = 0, numPlaces = 0, numCopy = number, numToAdd;

	while (numCopy / 10 != 0)
	{
		numPlaces++;
		numCopy /= 10;
	}
	for (int div = 10; (10 * number) / div != 0; div *= 10)
	{
		numToAdd = ((number % div) / (div / 10));
		for (int place = 0; place < numPlaces; place++)
		{
			numToAdd *= 10;
		}
		sumRev += numToAdd;
		numPlaces--;
	}
	return sumRev;
}

bool isPalindrome(int number)
{
	if (number == reverse(number))
	{
		return true;
	}
	return false;
}

int not4main()
{
	for (int check = 998001; check > 10000; check--) //loop through all products of 3 digit numbers
	{
		for (int prod1 = 100; prod1 < 999; prod1++)
		{
			if (check % prod1 == 0 && ((check / prod1) >= 100 && (check / prod1) <= 999))
			{
				if (isPalindrome(check))
				{
					cout << check << endl;
					return 0;
				}
			}
		}
	}
	return 0;
}