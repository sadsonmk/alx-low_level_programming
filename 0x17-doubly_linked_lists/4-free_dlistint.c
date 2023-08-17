#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: is the pointer to the beginning
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;
	dlistint_t *next;

	curr = head;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
