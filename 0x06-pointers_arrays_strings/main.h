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
 * _strcat - concatenates two strings.
 * @src: is the source string
 * @dest: is the destination string
 * Return: a pointer to the resulting string dest
 */


char *_strcat(char *dest, char *src);


/**
 * _strncat - concatenates two strings.
 * @src: is the source string
 * @dest: is tje destination string
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies a string
 * @src: is the source string to be copied
 * @dest: is the destination string
 * @n: number of bytes
 * Return: a pointer to the destination string
 */


char *_strncpy(char *dest, char *src, int n);


/**
 * _strcmp - compares two strings
 * @s1: is the first string
 * @s2: is the second string
 * Return: an integer <, >, == to zero
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: is the array
 * @n: is the number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - changes all lowercase letters to uppercase.
 * @n: is the pointer
 * Return: it returns n
 */


char *string_toupper(char *n);

/**
 * cap_string - capitalizes all words of a string.
 * @string: is the string to be capitalized
 * Return: it returns a pointer to the string
 */

char *cap_string(char *string);

/**
 * leet - encodes a string into 1337
 * @n: is the value you input
 * Return: returns n
 */

char *leet(char *n);

/**
 * rot13 - encodes a string using rot13
 * @str: is the value input
 * Return: returns the encoded str
 */

char *rot13(char *str);

/**
 * print_number - prints an integer using _putchar
 * @n: is the integer to be printed
 * Return: void
 */

void print_number(int n);

#endif /* MAIN_H */
