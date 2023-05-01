#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: is a pointer to the head pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current != NULL)
	{
		current = current->next;
		
		free(*head);
		
		*head = current;
	
	}
}

