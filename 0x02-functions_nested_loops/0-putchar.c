#include <stdio.h>

#include "main.h"

/**
 * main - Entry point
 *
 * for loop - looping construct
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char alphabet[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(alphabet[i]);
	}

	_putchar('\n');

	return (0);

}
