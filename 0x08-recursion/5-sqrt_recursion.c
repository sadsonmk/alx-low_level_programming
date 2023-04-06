#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the iput number
 * Return: returns the square root
 */

int _sqrt_recursion(int n)
{
	int x;

	x = n;

	n--;

	if (n <= 0)
		return (-1);

	else if (n == 1)
		return (1);
	else if (n * n == x)
	{
		x = x / _sqrt_recursion(n);
		return (x);
	}
	else 
	{
		return (-1);
	}
}




