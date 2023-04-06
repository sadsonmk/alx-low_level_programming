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
 * _puts_recursion - prints a string, followed by a new line.
 * @s: the input string
 * Return: returns void
 */

void _puts_recursion(char *s);

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the input string
 * Return: returns void
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the input string
 * Return: the length of s
 */

int _strlen_recursion(char *s);

/**
 * factorial - returns the factorial of a given number.
 * @n: the input number
 * Return: returns the factorial of n
 */

int factorial(int n);

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: is the base input
 * @y: is the exponent input
 * Return: the value of x to the power of y
 */

int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the iput number
 * Return: returns the square root
 */

int _sqrt_recursion(int n);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the input number
 * Return: return 1 if prime else 0
 */

int is_prime_number(int n);


/**
 * real_prime - calculates a prime recursively
 * @n: input number
 * @i: is the iterator
 * Return: returns 1 if prime else 0
 */

int real_prime(int n, int i);


/**
 * real_sqrt_recursion - find the natural square root of a number
 * @n: the input number
 * @i: the iterator
 * Return: the square of n
 */

int real_sqrt_recursion(int n, int i);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: is the input string
 * Return: 1 if s is palindrome else 0
 */

int is_palindrome(char *s);

/**
 * pal_recursion - checks a for palindrome
 * @s: the input string
 * @start: the starting point of the string
 * @end: the end of the string - equates to length
 * Return: 1 if s is a palindrome else 0
 */

int pal_recursion(char *s, int start, int end);

#endif /* MAIN_H */
