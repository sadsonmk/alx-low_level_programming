#include "lists.h"

/**
 * free_listint_safe -  frees a listint_t list.
 * @h: pointer to the first node pointer
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;

	listint_t *current;

	int variance;

	if (h == NULL || (*h) == NULL)
		return (0);


	while (*h != NULL)
	{
		variance = *h - (*h)->next;

		if (variance > 0)
		{
			current = (*h)->next;

			free(*h);

			*h = current;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}

	*h = NULL;

	return (size);
}
