#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: is the buffer
 * @size: is the size of the buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int x, y, z;

	if (size <= 0)
		printf("\n");

	else
	{
		for (x = 0; x < size; x += 10)
		{
			printf("%.8x", x);

			for (y = x; y < x + 10; y++)
			{
				if (y % 2 == 0)
					printf(" ");

				if (y < size)
					printf("%.2x", *(b + y));
				else
					printf(" ");
			}

			printf(" ");

			for (z = y; z < y + 10; z++)
			{
				if (z >= size)
					break;
				if (*(b + z) < 32 || *(b + z) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + z));
			}

			printf("\n");
		}

	}
}

