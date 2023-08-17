#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: is a double pointer to the head
 * @idx: is the index where to insert the node
 * @n: is the data to be inserted
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *curr = *h;
	unsigned int i = 0;
	unsigned int b = 0;

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (idx < b)
		return (NULL);


	if (!new_node)
		return (NULL);

	new_node->n = n;

	new_node->prev = NULL;
	new_node->next = NULL;

	for (i = 0; i < idx - 1; i++)
	{
		curr = curr->next;
		if (curr == NULL)
			return (NULL);
	}

	new_node->next = curr->next;
	new_node->prev = curr;

	if (curr->next != NULL)
		curr->next->prev = new_node;
	curr->next = new_node;

	return (new_node);
}
