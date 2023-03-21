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

	_putchar('0' + r);

	return (r);
}

