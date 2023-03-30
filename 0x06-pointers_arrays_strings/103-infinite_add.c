#include <stdio.h>
#include "main.h"

/**
 * infinite_add - adds two numbers.
 * @n1: The first number to add
 * @n2: The second number to add
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 * Return: returns a pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x, y, sum, value, overflow, val1, val2;

	x = y = sum = 0;

	while (*(n1 + x) != '\0')
		x++;

	while (*(n2 + y) != '\0')
		y++;

	if (x >= y)
		value = x;
	else
		value = y;

	if (size_r <= value + 1)
		return (0);

	r[value + 1] = '\0';

	x--, y--, size_r--;

	val1 = *(n1 + x) - 48, val2 = *(n2 + y) - 48;

	while (value >= 0)
	{
		overflow = val1 + val2 + sum;

		if (overflow >= 10)
			sum = overflow / 10;
		else
			sum = 0;

		if (overflow > 0)
			*(r + value) = (overflow % 10) + 48;
		else
			*(r + value) = '0';

		if (x > 0)
			x--, val1 = *(n1 + x) - 48;

		else
			val1 = 0;

		if (y > 0)
			y--, val2 = *(n2 + y) - 48;

		else
			val2 = 0;

		value--, size_r--;

	}

	if (*(r) == '0')
		return (r + 1);

	else
		return (r);







