#ifndef HASH_H
#define HASH_H

/*standard library */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*data structures */

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;


/**
 * hash_table_create - a function that creates a hash table.
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size);


/**
 * hash_djb2 - a hash function implementing the djb2 algorithm
 * @str: is the input string
 * Return: a long integer which is a hash number
 */

unsigned long int hash_djb2(const unsigned char *str);

/**
 * key_index - a function that gives you the index of a key
 * @key: is the key(the input string)
 * @size: is the size of the array of the hash table
 * Return: the index to store the value in the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size);

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key:  is the key to be added
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: value associated with the element, or NULL if key can't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key);

#endif /* hash_tables.h */
