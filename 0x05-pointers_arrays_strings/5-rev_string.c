#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a strin
 * @s: the string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	char temporary;

	int len, b, start, end;

	len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	end = len - 1;
	start = 0;

	for (b = start; b < end; b++)
	{
		temporary = s[b];
		s[b] = s[end];
		s[end] = temporary;

		end--;

	}



}
