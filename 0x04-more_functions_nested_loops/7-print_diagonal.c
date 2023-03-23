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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num = 0; num < n; num++)
		{
			for (num1 = 0; num1 < n; num1++)
			{
				if (num1 == num)
				{
					_putchar(92);
				}
				else if (num1 < num)
				{
					_putchar(32);
				}
			}
			_putchar('\n');
		}
	}
}
