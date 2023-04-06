#include <stdio.h>
#include "main.h"


/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the input number
 * Return: return 1 if prime else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (real_prime(n, n - 1));

}

/**
 * real_prime - calculates a prime recursively
 * @n: input number
 * @i: is the iterator
 * Return: returns 1 if prime else 0
 */

int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return real_prime(n, i - 1);
	}
}

