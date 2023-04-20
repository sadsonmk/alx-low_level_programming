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

	int b;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		b = va_arg(ap, int);
		printf("%d", b);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}

