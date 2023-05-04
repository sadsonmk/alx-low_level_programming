#include "main.h"

/**
 * _atoi - converts a string to integer
 * @str: is the string input to be converted
 * Return: returns the converted number
 */

int _atoi(const char *str)
{
	int i, num;

	num = 0;

	for (i = 0; *(str + i) >= '0' && *(str + i) <= '9'; i++)
	{
		num = 10 * num + (*(str + i) - '0');
	}
	return (num);
}

/**
 * binary_to_uint - converts a binary number
 * to an unsigned int
 * @b: is a pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int base;

	unsigned int temp, rem, total;

	total = 0;
	base = 1;


	if (b == NULL)
		return (0);

	temp = _atoi(b);

	while (temp)
	{
		rem = temp % 10;

		temp = temp / 10;

		total += rem * base;

		base = base * 2;

	}

	return (total);
}



