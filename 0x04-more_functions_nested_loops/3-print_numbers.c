#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints numbers 0-9 and a newline
 * Return: void
 */

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
