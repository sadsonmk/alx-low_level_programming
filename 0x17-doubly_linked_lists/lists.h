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

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: is a pointer to the head pointer
 * @n: is the data of the node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: is a double pointer to the start of the list
 * @n: is the data on each node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/**
 * free_dlistint - frees a dlistint_t list
 * @head: is the pointer to the beginning
 * Return: void
 */

void free_dlistint(dlistint_t *head);

/**
 * get_dnodeint_at_index - the nth node of a dlistint_t linked list
 * @head: is the head pointer
 * @index: is the node you have to return
 * Return: a pointer to the item on the specified index 
 * or NULL if its non-existent
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

#endif /* lists.h file */
