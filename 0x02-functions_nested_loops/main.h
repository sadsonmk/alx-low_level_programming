#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 * On error -1 is returned
 */
int _putchar(char c);

/**
 * print_alphabet - prints the lowercase alphabet
 * _putchar - writes the characters to stdout
 * Return: On success 0
 */
void print_alphabet(void);

/**
 * print_alphabet - prints the lowercase alphabet 10 times
 * _putchar - writes the characters to stdout
 * Return: On success 0
 */

void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase character
 * _putchar - writes the character to stdout
 * Return: 1 if @c is lowercase else 0
 * @c: The character to check
 */

int _islower(int c);
#endif
