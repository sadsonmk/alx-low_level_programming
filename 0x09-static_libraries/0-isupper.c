#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: is the character to be checked
 * Return: 1 if uppercase, else 0
 */

int _isupper(int c)
{
	if (c > 90 || c < 65)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
