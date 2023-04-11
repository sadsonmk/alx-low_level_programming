#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 * On error -1 is returned
 */
int _putchar(char c);

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: is the size of the array
 * @c: is the character used to initialize the array
 * Return: a pointer or NULL is size = 0
 */

char *create_array(unsigned int size, char c);


#endif /* MAIN_H */
