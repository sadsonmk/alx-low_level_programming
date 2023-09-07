#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *h_table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (!h_table)
		return (NULL);

	h_table->size = size;
	h_table->array = (hash_node_t **) calloc(h_table->size, sizeof(has_node_t *));

	if (!h_table->array)
		return (NULL);
	for (i = 0; i < h_table->size; i++)
	{
		h_table->array[i] = NULL;
	}


	return (h_table);
}
