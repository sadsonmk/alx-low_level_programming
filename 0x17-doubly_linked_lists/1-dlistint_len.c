#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: is the head pointer pointing to the beginning of the list
 * Return: the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
