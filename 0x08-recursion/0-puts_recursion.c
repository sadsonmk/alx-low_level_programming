#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: the input string
 * Return: returns void
 */

void _puts_recursion(char *s)
{


		if (*s == '\0')
		{
			_putchar('\n');
			return;
		}

		else
		{
			_putchar(*s);
			_puts_recursion(s + 1);
		}
}

