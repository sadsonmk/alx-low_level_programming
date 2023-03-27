#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string to be printed in half
 * Return: void
 */

void puts_half(char *str)
{
	int i, len, len2;

	len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		len2 = len / 2;
	}
	else
	{
		len2 = (len - 1) / 2;
	}

	for (i = len2; i <= len; i++)
	{
		_putchar(str[len2]);
		len2++;
	}

	_putchar('\n');
}
