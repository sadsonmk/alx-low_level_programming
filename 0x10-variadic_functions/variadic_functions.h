#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdio.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 * On error -1 is returned
 */

int _putchar(char c);

/**
 * sum_them_all - sums all its parameters
 * @n: number of arguments to be added
 * @...: variable number of arguments
 * Return: returns the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...);

#endif /* variadic_functions.h */
