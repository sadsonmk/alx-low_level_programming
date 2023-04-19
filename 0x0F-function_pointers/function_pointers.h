#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 * On error -1 is returned
 */

int _putchar(char c);

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: pointer to a function
 * Return: void
 */

void print_name(char *name, void (*f)(char *));






#endif /* FUNCTION_POINTERS.H */
