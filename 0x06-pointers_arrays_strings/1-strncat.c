#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: the source string
 * @dest: the destination string
 * @n: the number of bytes of src to be joined
 * Return: a pointer to the resulting string dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	int len, len2;

	len = 0;

	len2 = 0;


	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; len2 < n && src[i] != '\0'; i++)
	{
		dest[i + len] = src[i];
		len2++;
	}

	dest[i + len] = '\0';

	return (dest);
}

