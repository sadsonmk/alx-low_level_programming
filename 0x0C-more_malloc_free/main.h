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
 * malloc_checked - allocates memory using malloc.
 * @b: input
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b);

/**
 * string_nconcat -  concatenates two strings.
 * @s1: input string
 * @s2: input sring
 * @n: number of bytes of s2
 * Return: a pointer to newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif /* MAIN_H */
