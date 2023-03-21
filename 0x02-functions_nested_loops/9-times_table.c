#include "main.h"

/**
 * times_table - prints the 9 times table
 * @void: accepts no arguments
 * Return: returns nothing
 */
void times_table(void)
{
	int num1, num2, num3, num4, num5;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			num3 = num1 * num2;

			if (num3 > 9)
			{

				num4 = num3 % 10;

				num5 = (num3 - num4) / 10;


			_putchar(',');
			_putchar(' ');
			_putchar(num5 + '0');
			_putchar(num4 + '0');
			}

			else
			{
				if (num2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');

				}

				_putchar(num3 + '0');

			}
		}

		_putchar('\n');

	}
}
