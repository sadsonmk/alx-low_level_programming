#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly
 *  allocated space in memory, which contains a
 *  copy of the string given as a parameter.
 *  @str: input string
 *  Return: a pointer to an allocated space
 */

char *_strdup(char *str)
{
	char *dynamicArray;

	int len, i, j;

	len = i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	dynamicArray = malloc(sizeof(char) * (len + 1));

	if (dynamicArray == NULL)
	{
		return (NULL);
	}

	j = 0;

	while (str[j])
	{
		dynamicArray[j] = str[j];
		j++;
	}



	return (dynamicArray);
}
