#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: is a pointer to the hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *head;
	hash_node_t *item, *curr;

	head = ht;
	i = 0;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			item = ht->array[i];
			while (item != NULL)
			{
				curr = item->next;
				free(item->key);
				free(item->value);
				free(item);
				item = curr;
			}
		}

		i++;
	}
	free(head->array);
	free(head);

}
