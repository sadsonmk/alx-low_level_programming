#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers 0-9 and a newline
 * Return: numbers 0-9
 */

void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}
}
