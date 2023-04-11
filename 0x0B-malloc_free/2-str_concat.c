#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: input string
 * @s2: input string
 * Return: a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *dynamicArray;

	int len1, len2, k, l;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = len2 = 0;
	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	dynamicArray = malloc(sizeof(char) * (len1 + len2 + 1));
	if (dynamicArray == NULL)
		return (NULL);

	k = l = 0;
	while (s1[k] != '\0')
	{
		dynamicArray[k] = s1[k];
		k++;
	}
	while (s2[l] != '\0')
	{
		dynamicArray[k] = s2[l];
		l++, k++;
	}
	dynamicArray[k] = '\0';
	return (dynamicArray);
}
