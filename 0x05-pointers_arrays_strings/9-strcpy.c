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
	*dest = *src;
	return (*dest);
}

