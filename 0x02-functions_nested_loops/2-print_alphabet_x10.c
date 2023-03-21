#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet
 * while loop - loop construct
 * _putchar - writes characters to the stdio
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);

			alphabet++;
		}

	i++;

	_putchar('\n');
	}


}

