#ifndef LISTS_H
#define LISTS_H


#include <stdio.h>
#include <stdlib.h>


/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: is a pointer to the beginning of the list
 * Return: the length of the list
 */

size_t print_dlistint(const dlistint_t *h);

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: is the head pointer pointing to the beginning of the list
 * Return: the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h);

#endif /* lists.h file */
