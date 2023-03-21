#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: is the number to check the last digit
 * Return: the value of the last digit
 *
 */

int print_last_digit(int num)
{
	int r = num % 10;

	if (r < 0)
	{
		_putchar('0' + -(r));

	}

	else

	{
		_putchar('0' + r);
	}

	return ((int)(r));
}

