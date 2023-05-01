#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new
 * node at a given position
 * @head: a pointer to the head pointer
 * @idx: the index of the list where the new node should be added
 * @n: is the data to be added
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *new_node;

	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));

	if (head == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = (*head);
		(*head) = new_node;
		return (new_node);
	}


	for (i = 0; current && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
	}


	return (NULL);
}





