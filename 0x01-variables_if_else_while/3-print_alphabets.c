#include <stdio.h>
/**
 * main - Entry point
 * while loop - for printing letters of the alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);

		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);

		uppercase++;
	}

	putchar('\n');
}
