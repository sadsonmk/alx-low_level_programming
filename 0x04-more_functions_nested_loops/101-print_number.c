#include <stdio.h>
#include "main.h"

/**
 * print_number - uses _putchar and recursion to print integers
 * @n: is the number to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar(45);
	}

	else
	{
		num = n;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}

