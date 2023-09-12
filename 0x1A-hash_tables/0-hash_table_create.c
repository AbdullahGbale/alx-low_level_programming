#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 * Return: returns a new hash table and NULL if it doesnt
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->array = malloc(sizeof(hash_node_t *) * size);

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	new_table->size = size;
	return (new_table);
}
