#include <stdio.h>
#include "main.h"


/**
 * _strchr - locates a character in a string.
 * @s: is the string to be checked
 * @c: is the character to locate
 * Return: pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
		i++;	
	}
	return (NULL);
}
