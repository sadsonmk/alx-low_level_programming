#include <stdio.h>
/**
 * main - Entry point
 * while loop - printing the lowercase alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase == 'e' || lowercase == 'q')
		{
			continue;
			lowercase++;
		}
		else
		{
			putchar(lowercase);

		}

	}

	putchar('\n');

	return (0);
}

