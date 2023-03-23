#include <stdio.h>
#include "main.h"

/**
 * more_numbers - printing numbers 0-14
 * Return: void
 */

void more_numbers(void)
{
	int num, num1;

	for (num = 0; num <= 9; num++)
	{
		for (num1 = 0 ; num1 <= 14; num1++)
		{

			if (num1 >= 10)

				_putchar('1');


			_putchar((num1 % 10) + '0');

		}
		_putchar('\n');
	}
