#include <iostream>
using namespace std;

int notMain3()
{
	int isPrime = 1;  //"bool" that indicates numCheck's "primeyness"
	long long int numCheck;  //factor of 600billion being checked
	for (long int i = 3; i < 200283825048; i += 2)  //find the smallest factor of 600bill... 
	{
		if (600851475143 % i == 0)  //...and convert it to the biggest
		{
			numCheck = 600851475143 / i;
			if (((numCheck - 1) % 10 == 0 ^ (numCheck - 3) % 10 == 0) ^ ((numCheck - 7) % 10 == 0 ^ (numCheck - 9) % 10 == 0)) 
			{
				for (long long int j = 2; j < numCheck; j++)  //check if biggest factors are prime
				{
					if (numCheck%j == 0)
					{
						isPrime = 0;
						break;
					}
				}
				if (isPrime == 1)  //print out largest prime factor
				{
					cout << numCheck << " <-- Das it mayne, das it." << endl;
					return 0;
				}
				isPrime = 1;
			}
		}
	}
}