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
 * reset_to_98 - updates the value it points to to 98
 * @n: an int pointer
 * Return: returns 98
 *
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the value of two integers
 * @a: the first parameter
 * @b: the second parameter
 * Return: returns void
 */
void swap_int(int *a, int *b);


/**
 * _strlen - returns  the length of a string
 * @s: is the string to check the length
 * Return: returns the length of a string
 */

int _strlen(char *s);

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: is the string to print
 * Return: void
 */

void _puts(char *str);

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: is the string to reverse
 * Return: void
 */

void print_rev(char *s);

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: void
 */

void rev_string(char *s);


#endif /* MAIN_H */
