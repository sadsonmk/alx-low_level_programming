#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key:  is the key to be added
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_elem;
	unsigned long int i, index;
	char *copied_value;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	copied_value = strdup(value);
	if (!copied_value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copied_value;
			return (1);
		}
	}
	new_elem = malloc(sizeof(hash_node_t));
	if (!new_elem)
	{
		free(copied_value);
		return (0);
	}
	new_elem->key = strdup(key);
	if (!new_elem->key)
	{
		free(new_elem);
		return (0);
	}
	new_elem->value = copied_value;
	new_elem->next = ht->array[index];
	ht->array[index] = new_elem;
	return (1);
}
