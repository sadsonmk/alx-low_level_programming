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
	char *dynamiArray;

	unsigned int i;

	dynamicArray = malloc(sizeof(char) * size);

	if (dynamicArray == NULL || size == 0)
	{
		return (NULL);
	}

	else
	{
		i = 0;

		while (i < size)
		{
			dynamicArray[i] = c;

			i++;
		}

	}


	return (dynamicArray);

}
