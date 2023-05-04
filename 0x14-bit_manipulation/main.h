#ifndef MAIN_H
#define MAIN_H

/* standard library */
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _atoi - converts a string to integer
 * @str: is the string input to be converted
 * Return: returns the converted number
 */

int _atoi(const char *str);
/**
 * binary_to_uint - converts a binary number
 * to an unsigned int
 * @b: is a pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b);



#endif /* main.h */
