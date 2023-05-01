#include "lists.h"

/**
 * sum_listint - sum of all the data (n)
 * of a listint_t linked list
 * @head: is the head pointer
 * Return: returns the sum of all the data (n)
 * else 0
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;

	int sum = 0;

	if (current == NULL)
		return (0);
	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
