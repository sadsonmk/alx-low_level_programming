#include <stdio.h>
#include "main.h"



/**
 * _strstr - locates a substring.
 * @haystack: is the string to be scanned
 * @needle: is the string to be matched
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;

	while (*haystack)
	{
		while (haystack[i] == needle[i] && needle[i] != '\0')
		{
			i++;
		}
		if (needle[i] == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
