#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: is a pointer to the beginning of the list
 * Return: the length of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
	{
		return (len);
	}

	while (h != NULL)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (len);
}

