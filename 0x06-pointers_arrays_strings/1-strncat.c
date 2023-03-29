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

	for (i = 0; src[i] != '\0'; i++)
		len2++;

	if (n >= len2)
	{

		for (i = 0; src[i] <= n + 1; i++)
		{
			dest[i + len] = src[i];
		}
	}

	else
	{
		for (i = 0; src[i] > n; i++)
		{
			dest[i + len] = src[i];
		}
	dest[i + len] = '\0';

	return (dest);
}

