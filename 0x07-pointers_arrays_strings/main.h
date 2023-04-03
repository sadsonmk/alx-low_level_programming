#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

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

#endif /* MAIN_H */
