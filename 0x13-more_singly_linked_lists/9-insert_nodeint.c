#include "lists.h"

/**
 * add_data - pushes a new node on the front
 * @head: is a pointer to the head pointer
 * @n: is the data to be added
 * Return: void
 */

void add_data(listint_t **head, int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

}

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

	listint_t *current = *head;

	if (idx == 0)
	{
		add_data(head, n);
		return (current);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}

	add_data(&(current->next), n);



	return (current);
}



