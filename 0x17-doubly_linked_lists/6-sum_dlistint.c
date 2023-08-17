#include "lists.h"

/**
 * sum_dlistint - sums all the data (n) of a dlistint_t linked list
 * @head: is the head pointer
 * Return: the sum of the data or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *curr = head;

	if (curr == NULL)
		return (0);

	while (curr != NULL)
	{
		total += curr->n;
		curr = curr->next;
	}
	return (total);
}
