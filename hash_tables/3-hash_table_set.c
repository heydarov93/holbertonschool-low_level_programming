#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set -  adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: can not be an empty string
 * @value: value associated with the key, can be an empty str
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (strlen(key) == 0 || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}


	node = calloc(1, sizeof(hash_node_t));

	if (node == NULL)
	{
		free(node);
		return (0);
	}

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[index])
	{
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}

	ht->array[index] = node;
	return (1);
}
