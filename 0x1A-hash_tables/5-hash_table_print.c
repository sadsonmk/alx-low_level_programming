#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: is the hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *item;
	unsigned long int i = 0;
	int flag = 0;

	if (!ht)
		return;

	printf("{");

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			item = ht->array[i];
			while (item != NULL)
			{
				printf("'%s': '%s'", item->key, item->value);
				item = item->next;

				if (item != NULL)
					printf(", ");
			}
			flag = 1;
		}

		i++;
	}
	printf("}\n");

}
