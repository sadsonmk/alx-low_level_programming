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

	total1 = 0;

	total2 = 0;
	


	for (num = (a + 0); num <= (a + size); num += size + 1)
	{
		total1 += *num;
		printf("%d\n", *num);
	}

	for (num = (a + 0) + 4; num <= (a + size - 1); num += size - 1)
	{

		total2 += *num;
		printf("%d\n", *num);
	}

	printf("%d, %d\n", total1, total2);


}
