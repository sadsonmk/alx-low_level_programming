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
 * _print_num - prints integers using _putchar
 * @n: is the input number
 * Return: void
 */

void _print_num(unsigned long int n);

/**
 * binary_to_uint - converts a binary number
 * to an unsigned int
 * @b: is a pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b);

/**
 * print_binary - prints the binary representation of a number.
 * @n: is the input number
 * Return: void;
 */

void print_binary(unsigned long int n);

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: input number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index);

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: input number
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index);

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: input number
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index);


#endif /* main.h */
