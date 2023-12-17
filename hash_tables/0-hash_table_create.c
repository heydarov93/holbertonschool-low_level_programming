#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates ash table
 * @size: is the size of the array
 *
 * Return: pointer to the newly created hash table
 *		NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **arr;

	arr = calloc(size, sizeof(char *));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	table = calloc(1, sizeof(hash_table_t));

	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	(*table).size = size;
	(*table).array = arr;

	return (table);
}
