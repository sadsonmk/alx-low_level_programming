#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints diagonal lines on the terminal
 * @n: the number of diagonal lines
 * Return: void
 */
void print_diagonal(int n)
{
	int num, num1;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			for (num1 = -num; num1 < num; num1++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
