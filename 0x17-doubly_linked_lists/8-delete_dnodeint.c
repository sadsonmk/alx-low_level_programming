#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at specified index
 * @head: is the pointer to the beginning of the list
 * @index: is the position of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;

	unsigned int b = 0;

	dlistint_t *curr = NULL, *removed = NULL;

	if (index < b)
		return (-1);

	curr = *head;
	for (i = 0; i < index - 1; i++)
	{
		curr = curr->next;
		if (curr == NULL)
			return (-1);
	}

	removed = curr->next;

	if (removed == *head)
	{
		*head = removed->next;
	}
	else
	{
		curr->next = removed->next;
		removed->next->prev = curr;
	}
	free(removed);

	return (1);

}
