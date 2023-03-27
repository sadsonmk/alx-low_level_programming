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


/**
 * puts2 - prints every other character of a string
 * @str: the string to be printed
 * Return: void
 */


void puts2(char *str);


/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string to be print in half
 * Return: void
 */

void puts_half(char *str);


/**
 * print_array - prints n elements of an array of ints and a new line.
 * @a: is the array
 * @n: number of elements in the array
 * Return: void
 */


void print_array(int *a, int n);

/**
 * _strcpy - copies a string
 * @dest: the destination to be copied to
 * @src: the source to copy from
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src);

#endif /* MAIN_H */
