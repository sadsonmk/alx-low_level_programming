#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * prints the sum of all multiples of 3 and 5 upto 1024
 */

int main(void)
{


	int x, y = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y = y + x;
		}
		x++;
	}
	printf("%d\n", y);

	return (0);
}
