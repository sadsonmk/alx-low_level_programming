#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character to stdout
 * Return: On success 1
 * On error -1 is returned
 *
 *
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
