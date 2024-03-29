#include "lists.h"


/**
 * the_loop_flag - Detects a loop in a linked list.
 * @head: Pointer to head of the list.
 * Return: If there is a loop - number of nodes.
 *	   If there is no loop - 0.
 */
size_t the_loop_flag(const listint_t *head)
{
	const listint_t *fast, *slow;
	size_t node = 0;

	if (!head || !head->next)
		return (0);

	slow = head;
	fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				node++;
				slow = slow->next;
				fast = fast->next;
			}

			fast = fast->next;
			while (slow != fast)
			{
				node++;
				fast = fast->next;
			}
			return (++node);
		}
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, i = 0;

	if (head == NULL)
		exit(98);

	node = loop_flag(head);

	if (node == 0)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			node++;
			head = head->next;
		}
	}

	else
	{
		while (i < node)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
