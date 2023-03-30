#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>


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

#endif /* MAIN_H */
