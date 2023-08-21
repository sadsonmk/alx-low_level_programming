#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the number to compute
 * Return: The absolute value of a number
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return ((n * -2) + n);
	}

}
