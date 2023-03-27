#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string to reverse
 * Return: void
 */

void print_rev(char *s)
{
	int a, len;

	len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	for (a = len - 1; a >= 0 ; a--)
	{
		_putchar(s[a]);

	}
	_putchar('\n');
}
