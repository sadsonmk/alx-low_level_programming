#include <stdio.h>

/**
 * main - Entry point
 *
 * while loop - loop through the alphabet in reverse
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char lowercase = 'z';

	while (lowercase >= 'a')
	{
		putchar(lowercase);

		lowercase--;

	}

	putchar('\n');

	return (0);

}
