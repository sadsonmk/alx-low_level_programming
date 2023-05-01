#include "lists.h"

/**
 * get_nodeint_at_index - nth node of a listint_t linked list
 * @head: is the head pointer
 * @index: is the index of the node, starting at 0
 * Return: returns the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	unsigned int ind = 0;

	while (current != NULL)
	{
		if (ind == index)
			return (current);
		ind++;

		current = current->next;
	}

	return (NULL);
}
