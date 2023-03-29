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
	*dest = *dest + *src;

	return (*dest);
}
