#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the first parameter
 * @b: the second parameter
 *
 * Return: returns void
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
