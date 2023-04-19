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

/**
 * array_iterator - executes a function given as 
 * a parameter on each element of an array
 * @array: is the array input
 * @size: are the elements to print
 * @action: the pointer to a function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int));



#endif /* FUNCTION_POINTERS.H */
