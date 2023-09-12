#include "hash_tables.h"

/**
 * key_index - Calculates the index of a key in a hash table.
 * @key: The key
 * @size: The size of the array in the hash table.
 *
 * Return: The index at which the key/value pair should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);
	
	/* Calculate the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Modulo the hash value by the size to get the index */
	return (hash_value % size);
}
