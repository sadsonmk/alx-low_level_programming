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
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: is the size of the array
 * @c: is the character used to initialize the array
 * Return: a pointer or NULL is size = 0
 */

char *create_array(unsigned int size, char c);

/**
 * _strdup - a function that returns a pointer to a newly
 *  allocated space in memory, which contains a
 *  copy of the string given as a parameter.
 *  @str: input string
 *  Return: a pointer to an allocated space
 */

char *_strdup(char *str);

/**
 * str_concat - concatenates two strings.
 * @s1: input string
 * @s2: input string
 * Return: a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - is a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: input 1
 * @height: input 2
 * Return: returns a pointer to a 2-D array
 */

int **alloc_grid(int width, int height);

#endif /* MAIN_H */
