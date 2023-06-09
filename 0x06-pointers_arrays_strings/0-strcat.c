#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: the source string
 * @dest: the destination string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	int len;

	len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + len] = src[i];

	}

	dest[i + len] = '\0';

	return (dest);
}
