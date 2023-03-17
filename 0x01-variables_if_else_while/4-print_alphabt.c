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
		putchar(lowercase);
		lowercase++;
		if (lowercase == 'q' || lowercase == 'e')
		{
			continue;
		}
	
		

	}

	putchar('\n');

	return (0);
}

