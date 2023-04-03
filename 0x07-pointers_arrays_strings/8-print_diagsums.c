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

	int *num1;

	int *num2;

	for (num1 = (a + 0) + 0; num1 <= (a + size - 1) + (size) * size; num1 += size + 1)
	{
		total1 += *num1;
	}

	for (num2 = (a + 0) + 4; num2 < (a + size - 1) + (size - 1) * size; num2 += size - 1)
	{

		total2 += *num2;
	}

	printf("%d, %d\n", total1, total2);


}
