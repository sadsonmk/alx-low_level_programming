#include "hash_tables.h"

/**
 * hash_djb2 - a hash function implementing the djb2 algorithm
 * @str: is the input string
 * Return: a long integer which is a hash number
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;

	int ch;

	hsh = 5381;

	while ((ch = *str++))
		hsh = (hsh * 33) + ch;

	return (hsh);
}
