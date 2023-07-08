#include <stdio.h>
#include "main.h"
/**
 * flip_bits - function that returns the number of bits to flip
 * @n: number to be flipped
 * @m: second number to be flipped
 * Return: returns the number of bits that need to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
