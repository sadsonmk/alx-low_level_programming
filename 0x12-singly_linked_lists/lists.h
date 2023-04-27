#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list_t input
 * Return: the number of nodes
 */

size_t print_list(const list_t *h);


#endif /* lists_h */
