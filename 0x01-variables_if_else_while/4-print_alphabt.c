#include <stdio.h>
/**
 * main - Entry point
 * while loop - printing the lowercase alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase == 'q' || lowercase == 'e')
		{
			continue;
		}
		else
		{
			putchar(lowercase);

		}
		lowercase++;

	}

	putchar('\n');

	return (0);
}

