#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: is the value you input
 * Return: returns n
 */

char *leet(char *n)
{
	int x, y;

	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (n[x] == a[y])
			{
				n[x] = b[y];
			}
		}
	}

	return (n);
}

