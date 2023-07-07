#include "main.h"

/**
 * get_endianness - checks the endianness of a computer
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int b = 1;

	char *a = (char *) &b;

	return (*a);
}
