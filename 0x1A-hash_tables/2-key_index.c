#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a ahsh table
 * @key: the key to be hashed
 * @size: The size of the array of the hash table
 *
 * Return: the index wherethe key should be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;

	hash_val = hash_djb2(key);

	return (hash_val % size);
}
