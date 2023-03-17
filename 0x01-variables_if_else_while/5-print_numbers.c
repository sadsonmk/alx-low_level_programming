#include <stdio.h>

/**
 * main - Entry point
 * while loop - printing numbers zero to nine
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);

		num++;
	}

	printf("\n");

	return (0);

}
