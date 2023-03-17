#include <stdio.h>
/**
 * main - Entry point
 * while loop - loop through the letters and print
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet++;
	}

	putchar("\n");

	return (0);
}
