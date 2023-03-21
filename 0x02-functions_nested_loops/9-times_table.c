#include "main.h"

/**
 * times_table - prints the 9 times table
 * @void: accepts no arguments
 * Return: returns nothing
 */

void times_table(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			int num3 = num1 * num2;

			printf("%d", num3);

			if (num1 >= 0 && num2 > 8)
			{

			_putchar(',');
			_putchar(' ');
			}
		}

		_putchar('\n');

	}
}
