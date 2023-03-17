#include <stdio.h>

/**
 * main - Entry point
 *
 * while loop - for looping
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int num, num2;

	for (num = 48; num < 58; num++)
	{
		for (num2 = num + 1; num2 < '9' ; num2++)
		{
			if (num2 != num)
			{
				putchar(num);
				putchar(num2);

				if (num == '8' && num2 == '9')
				{
					continue;
					putchar(44);
					putchar(32);
				}

			}
		}
	}
	putchar('\n');
	return (0);


}


