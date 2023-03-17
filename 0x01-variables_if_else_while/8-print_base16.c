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
	int hex2 = 97;

	while (hex < 58)
	{
		putchar(hex);

		hex++;

	}

	while (hex2 < 103)
	{
		putchar(hex2);

		hex2++;

	}
	putchar('\n');

	return (0);

}


