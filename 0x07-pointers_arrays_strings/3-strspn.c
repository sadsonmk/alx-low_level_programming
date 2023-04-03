#include <stdio.h>
#include "main.h"


/**
 * _strspn - gets the length of a prefix substring.
 * @s: is the string to be checked
 * @accept: is the string to be matched
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;

	unsigned int len;

	i = 0;

	len = 0;

	while (s[i] != '\0')
	{
		while (accept[i] != '\0')
		{
			if (accept[i] == s[i])
			{
				len++;
				break;
			}
			i++;
		}
		i++;

	}
	return (len);
}

