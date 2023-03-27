#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a strin
 * @s: the string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int len, b;

	len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	for (b = len - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
