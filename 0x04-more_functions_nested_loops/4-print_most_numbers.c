#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9 except 2 and 4
 * Return: numbers 0-9 except 2 and 4
 */

void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num == 50 || num == 52)
		{
			continue;
		}
		else
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
