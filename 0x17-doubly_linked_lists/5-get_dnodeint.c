#include "lists.h"

/**
 * get_dnodeint_at_index - the nth node of a dlistint_t linked list
 * @head: is the head pointer
 * @index: is the node you have to return
 * Return: a pointer to the item on the specified index
 * or NULL if its non-existent
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int i = 0;

	for (i = 0; i < index; i++)
	{
		if (curr == NULL)
			return (NULL);
		curr = curr->next;
	}

	return (curr);

}
