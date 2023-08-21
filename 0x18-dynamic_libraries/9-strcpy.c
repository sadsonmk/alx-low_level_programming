#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: the destination to be copied to
 * @src: the source to copy from
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (*(src + len) != '\0')
	{

		for (i = 0; i <= len; i++)
		{
			*(dest + i) = *(src + i);
		}

		len++;
	}
	*(dest + i) = '\0';

	return (dest);



}

