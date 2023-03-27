#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string to reverse
 * Return: void
 */

void print_rev(char *s)
{
	int a, len, temporary;

	len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	for (a = 0; a < len / 2; a++)
	{
		temporary = s[a];
		s[a] = s[len - a - 1];
		s[len - a - 1] = temporary;
	}
	_putchar('\n');
}
