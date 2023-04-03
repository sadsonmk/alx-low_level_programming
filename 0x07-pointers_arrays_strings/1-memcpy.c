#include <stdio.h>
#include "main.h"


/**
 * _memcpy - copies memory area.
 * @dest: memory area to be copied to
 * @src: memory area to copy from
 * @n: bytes of memory to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (n > i)
	{
		dest[i] = src[i];
		n--;
		i++;
	}

	return (dest);
}




