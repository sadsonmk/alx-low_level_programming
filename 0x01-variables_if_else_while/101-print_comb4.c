#include <stdio.h>

/**
 * main - Entry point
 * for loops - for looping
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{

	int num0, num1, num2;

	for (num0 = '0'; num0 < '9'; num0++)
	{
		for (num1 = num0 + 1; num1 <= '9'; num1++)
		{
			for (num2 = num1 + 1; num2 <= '9'; num2++)
			{
				if ((num1 != num0) != num2)
				{
					putchar(num0);
					putchar(num1);
					putchar(num2);

					if (num0 == '7' && num1 == '8')
					{
						continue;
					}

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
