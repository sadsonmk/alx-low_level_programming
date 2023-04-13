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
 * malloc_checked - allocates memory using malloc.
 * @b: input
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b);

/**
 * string_nconcat -  concatenates two strings.
 * @s1: input string
 * @s2: input sring
 * @n: number of bytes of s2
 * Return: a pointer to newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - llocates memory for an array, using malloc.
 * @nmemb: number of array elements
 * @size: the size of each element
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to a memory area
 * @b: a constant byte
 * @n: number of bytes of memory to be filled
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * array_range - creates an array of integers.
 * @min: minimum range value
 * @max: maximum range value
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max);

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: pointer to the newly allocated space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /* MAIN_H */
