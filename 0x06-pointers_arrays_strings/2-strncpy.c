#include <stdio.h>
#include "main.h"


/**
 * _strncpy - copiues a string
 * @src: the source string to be copied
 * @dest: the destination string to be copied to
 * @n: the number of bytes
 * Return: a pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)

		dest[i] = '\0';

	return (dest);

}
