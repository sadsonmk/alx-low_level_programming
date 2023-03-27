#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to be checked for it's length
 * Return: returns the length of s.
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	return (len);
}
