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

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of arguments
 * @...: are the variable arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: is the string to be printed between
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...);

#endif /* variadic_functions.h */
