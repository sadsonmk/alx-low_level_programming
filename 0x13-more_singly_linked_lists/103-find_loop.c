#include "lists.h"

/**
 * find_listint_loop - finds the loop
 * in a linked list
 * @head: pointer to the first node
 * Return: address of the node where
 * the loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	int flag = 0;

	while (head != NULL)
	{

		if (flag == 1)
		{
			return (head);

		}

		flag = 1;

		head = head->next;

	}
	return (NULL);
}



