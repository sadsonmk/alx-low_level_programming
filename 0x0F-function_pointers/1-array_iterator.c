#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as 
 * a parameter on each element of an array
 * @array: is the array input
 * @size: are the elements to print
 * @action: the pointer to a function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b;

	if (action == NULL || array == NULL)
		return;

	b = 0;

	while (b < size)
	{
		action(array[b]);
		b++;
	}
}
