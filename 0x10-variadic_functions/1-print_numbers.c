#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of arguments
 * @...: are the variable arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	signed int b;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		b = va_arg(ap,signed int);

		if (separator == NULL)
			printf("%d", b);
		else
		{
			if (i < n - 1)
				printf("%d%c ", b, *separator);
			if (i >= n - 1)
				printf("%d", b);
		}
	}

	va_end(ap);

	printf("\n");
}

