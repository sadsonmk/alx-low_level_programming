#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int len;

	len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	write(1, str, len);
	_putchar('\n');

}
