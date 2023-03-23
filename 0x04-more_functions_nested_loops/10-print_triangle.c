#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = a; b < size; b++)
			{
				_putchar(32);
			}
			for (b = 1; b <= a; b++)
			{
				_putchar(35);
			}
			_putchar('\n');

		}
	}
}

