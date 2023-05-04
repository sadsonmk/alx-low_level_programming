#include "main.h"

/**
 * flip_bits - number of bits you would
 * need to flip to get from one number to another.
 * @n: input number
 * @m: input number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bits = 64, increment = 0;
	unsigned long int xor, temp;

	xor = n ^ m;

	for (i = bits - 1; i >= 0; i--)
	{
		temp = xor >> i;

		if (temp & 1)
			increment++;
	}
	return (increment);
}

