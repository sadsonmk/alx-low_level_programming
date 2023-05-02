#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: is the pointer to the first node
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *start;

	listint_t *remainder;

	if (*head == NULL)
		return (*head);

	start = *head;

	remainder = start->next;

	if (remainder == NULL)
		return (*head);

	reverse_listint(&remainder);

	start->next->next = start;
	start->next = NULL;

	*head = remainder;

	return (*head);


}




