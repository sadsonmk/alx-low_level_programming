#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: is the starting point for counting
 * Return: nothing
 *
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n == 98)
		{
		printf("%d", n);

		}
		else
		{
			printf("%d, ", n);
		}
		n++;

	}
	printf("\n");

	while (n >= 98)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d, ", n);
		}
		n--;
	}
	printf("\n");

}

