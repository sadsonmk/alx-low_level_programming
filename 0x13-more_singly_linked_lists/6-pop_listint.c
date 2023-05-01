#include "lists.h"

/**
 * pop_listint - deletes the head node
 * of a listint_t linked list
 * @head: is a pointer to the head node
 * Return: returns the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;

	int data;

	if (current == NULL)
		return (0);

	data = current->n;

	*head = current->next;

	free(current);

	return (data);
}


