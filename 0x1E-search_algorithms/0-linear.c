#include "search_algos.h"

/**
 * linear_search - Funtion that searches for a value in an array of
 * integers using the linear search algorithm.
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: First index where value is located or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t count;

	if (array == NULL)
	{
		return (-1);
	}

	for (count = 0; count < size; count++)
	{
		printf("Value checked array[%ld] = [%d]\n", count, array[count]);
		if (array[count] == value)
		{
			return (count);
		}
	}
	return (-1);
}
