#include "lists.h"


/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	size_t idx = 0;
	
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodes += 1;
		head = head->next;
	}

	for (idx = 0; idx < nodes; idx++)
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		
	}
	
	return (nodes);
}

