#ifndef MAIN_H
#define MAIN_H

/* standard library */
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 * On error -1 is returned
 */
int _putchar(char c);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is a pointer to a string on 0 and 1
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - prints the binary representation of a number
 * @n: is the input
 * Return: void return
 */
void print_binary(unsigned long int n);

/**
 * get_bit - returns the value of a bit at a given index
 * @n: is the input number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index);

#endif /* main.h */
