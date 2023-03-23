#include <stdio.h>

/**
 * print_numbers - prints numbers 0-9 and a newline
 * Return: numbers 0-9
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
