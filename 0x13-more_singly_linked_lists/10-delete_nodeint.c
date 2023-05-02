#include "lists.h"


/**
 * delete_nodeint_at_index - deletes the node
 * at index index of a listint_t linked list
 * @head: pointer to a head pointer
 * @index: the index of the node that should be deleted
 * Return: 1 if successful else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;

	listint_t *current = *head;

	listint_t *placeholder = NULL;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		current = current->next;
		free(current);
		return (1);
	}

	while (idx < index - 1)
	{
		if (current == NULL || current->next == NULL)
			return (-1);
		current = current->next;
		idx++;
	}

	placeholder = current->next;
	current->next = placeholder->next;
	free(placeholder);

	return (1);
}

