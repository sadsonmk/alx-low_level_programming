#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the iput number
 * Return: returns the square root
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);

	else
	{
		return (real_sqrt_recursion(n, 0));
	}
}

/**
 * real_sqrt_recursion - find the natural square root of a number
 * @n: the input number
 * @i: the iterator
 * Return: the square of n
 */

int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}

	else
	{
		return (real_sqrt_recursion(n, i + 1));
	}
}




