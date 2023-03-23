#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Return: the largest prime factor of the number 612852475143.
 */

int main(void)
{
	long int large_prime = -1;
	long int number = 612852475143;
	long int a;

	while (number % 2 == 0)
	{
		large_prime = 2;
		number = number / 2;
	}

	for (a = 3; a <= sqrt(number); a += 2)
	{
		while (number % a == 0)
		{
			large_prime = a;
			number = number / a;
		}
	}

	if (number > 2)
		large_prime = number;

	printf("%ld\n", large_prime);

	return (0);
}




