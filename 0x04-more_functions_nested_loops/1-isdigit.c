#include <stdio.h>

/**
 * _isdigit - checks for a digit 0-9
 * @c: is the character to check
 * Return: 1 if c is a digit, else 0
 */

int _isdigit(int c)
{
	if (c < 48 || c > 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
