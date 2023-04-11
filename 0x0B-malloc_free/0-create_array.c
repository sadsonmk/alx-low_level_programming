#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: is the size of the array
 * @c: is the character used to initialize the array
 * Return: a pointer or NULL is size = 0
 */

char *create_array(unsigned int size, char c)
{

	if (size > 0)
	{
		char *dynamicArray = malloc(sizeof(c) * size);
	}
	else
	{
		return (NULL);
	}

	free(dynamicArray);

	return (dynamicArray);
}
