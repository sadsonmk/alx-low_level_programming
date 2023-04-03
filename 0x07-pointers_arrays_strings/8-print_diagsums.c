#include <stdio.h>
#include "main.h"


/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @a: is the input array
 * @size: size of the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int total1, total2;

	int *num;

	int *num2;

	for (num = (a + 0); num <= (a + size); num += size + 1)
	{
		total1 += *num;
	}

	for (num2 = (a + 0); num2 <= (a + size - 1); num2 += size - 1)
	{
		if (num2 == (a + 0))
			continue;

		total2 += *num2;
	}

	printf("%d, %d\n", total1, total2);


}
