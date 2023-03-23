#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints numbers 0-9 and a newline
 * Return: void
 */

void print_numbers(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
