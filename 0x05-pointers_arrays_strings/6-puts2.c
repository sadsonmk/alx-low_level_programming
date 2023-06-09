#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: The string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
		len++;
	}
	_putchar('\n');
}
