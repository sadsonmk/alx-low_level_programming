#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array of ints and a new line.
 * @a: is the array
 * @n: is the number of elements in the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int len, i;

	len = n;

	for (i = 0; i <= len - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
