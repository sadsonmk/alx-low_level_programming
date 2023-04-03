#include <stdio.h>
#include "main.h"


/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: is the string to scanned
 * @accept: is the string to be matched
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			is (*s == accept[i])
			{
				return (s);
			}
		}
	s++;
	}

	return (s);
}
