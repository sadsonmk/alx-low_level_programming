#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array input
 * @size: is the size of the array
 * @cmp: the pointer to the function
 * Return: index of the first element else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);
	b = 0;

	while (b < size)
	{
		if (cmp(array[b]))
			return (b);
		b++;
	}
	return (-1);
}



