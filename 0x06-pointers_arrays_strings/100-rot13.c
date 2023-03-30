#include <stdio.h>
#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the input string to be encoded
 * Return: returns the encoded string
 */

char *rot13(char *str)
{
	int x, y;

	char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char rot_encoder[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y <= 51; y++)
		{
			if (str[x] == original[y])
			{
				str[x] = rot_encoder[y];
				break;
			}
		}
	}

	return (str);

}
