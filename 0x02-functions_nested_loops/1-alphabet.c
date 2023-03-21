#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet
 * while loop - loop construct
 * _putchar - writes characters to the stdio
 *
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);

		alphabet++;
	}

	_putchar('\n');
}
