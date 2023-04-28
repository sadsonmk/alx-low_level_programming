#ifndef LISTS_H
#define LISTS_H

/* standard library */
#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 * On error -1 is returned
 */
int _putchar(char c);

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;

} listint_t;

size_t print_listint(const listint_t *h);

#endif /* lists.h */
