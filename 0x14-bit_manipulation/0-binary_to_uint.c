#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number
 * @b: pointer to the function
 * Return: returns the converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	/*unsigned int bit_value = 1;*/
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			result = result << 1;
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (result);
}
