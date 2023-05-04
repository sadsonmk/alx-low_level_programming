#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: is the input number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int i, j;

	for (i = 0; i < sizeof(long int); i++)
	{
		char byte = ((char *)&n)[i];

		for (j = 8; j > 0; j--)
		{
			char bit = byte & 1;

			_putchar(bit + '0');
			byte >>= 1;
		}
	}



}


