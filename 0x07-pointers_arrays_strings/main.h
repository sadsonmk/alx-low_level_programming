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
 * print_chessboard - prints the chessboard.
 * @a: is an array of characters
 * Return: void
 */

void print_chessboard(char (*a)[8]);

#endif /* MAIN_H */
