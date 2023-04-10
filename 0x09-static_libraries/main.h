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
 * _strcpy - copies a string
 * @dest: the destination to be copied to
 * @src: the source to copy from
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src);

/**
 * _atoi - converts a stringt to an integer
 * @s: is the string to convert
 * Return: returns an integer
 */

int _atoi(char *s);

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
 * _memset - fills memory with a constant byte.
 * @s: pointer to a memory area
 * @b: a constant byte
 * @n: number of bytes of memory to be filled
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory area.
 * @dest: memory area to be copied to
 * @src: memory area to copy from
 * @n: bytes of memory to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in a string.
 * @s: is the string to be checked
 * @c: is the character to locate
 * Return: pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c);

/**
 * _strspn - gets the length of a prefix substring.
 * @s: is the string to be checked
 * @accept: is the string to be matched
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: is the string to scanned
 * @accept: is the string to be matched
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates a substring.
 * @haystack: is the string to be scanned
 * @needle: is the string to be matched
 * Return: a pointer to the beginning of the located substring
 */


char *_strstr(char *haystack, char *needle);

/**
 * _islower - checks for lowercase character
 * _putchar - writes the character to stdout
 * Return: 1 if @c is lowercase else 0
 * @c: The character to check
 */

int _islower(int c);

/**
 * _isalpha - checks for an alphabet character
 * @c: The character to check
 * Return: 1 if c is a character else 0
 */

int _isalpha(int c);
/**
 * _abs - computes the absolute value of an integer
 * @int: The numbers to be computed
 * Return: The absolute value
 */

int _abs(int);

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

int _isdigit(int c)

#endif /* MAIN_H */
