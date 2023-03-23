#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 * @c: is the character to check
 * Return: 1 if c is uppercase, else 0
 */
int _isupper(int c);

/**
 * _isdigit - checks for a digit 0-9
 * @c: is the character to check
 * Return: 1 if c is a digit, else 0
 */

int _isdigit(int c);

/**
 * mul - multiplies two numbers
 * @a: is the first number
 * @b: is the second number
 * Return: the result of the multiplication
 */

int mul(int a, int b);

/**
 * print_numbers - prints numbers 0-9 and a newline
 * Return: the numbers 0-9
 */

void print_numbers(void);


#endif /* MAIN_H */
