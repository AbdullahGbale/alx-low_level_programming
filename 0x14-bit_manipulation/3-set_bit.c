#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to the number where the bit will be set
 * @index: the index of the bit to set
 * Return: returns 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)

		return (-1);

	mask = 1UL << index;
	*n |= mask;
	return (1);
}
