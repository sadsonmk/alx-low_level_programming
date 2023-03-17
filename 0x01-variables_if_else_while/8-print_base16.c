#include <stdio.h>

/**
 * main - Entry point
 * while loop - for looping through the hexadecimal
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int hex = 48;

	while (hex < 73)
	{
		putchar(hex);

		hex++;
		if (hex > 57 && hex < 65)
		{
			continue;
			hex++;
		}
	}
	putchar('\n');

	return (0);

}


