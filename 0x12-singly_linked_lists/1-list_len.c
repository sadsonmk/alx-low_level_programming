#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: list_t pointer
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes += 1;
	}
	return (nodes);
}

