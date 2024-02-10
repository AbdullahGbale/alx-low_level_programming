#include "search_algos.h"

/**
 *  * binary_search - Searches for a value in a sorted array of integer
 *   * using the Binary search algorithm
 *    * @array: Pointer to the first element of the array to search in
 *     * @size: Number of elements in the array
 *      * @value: Value to search for
 *       * Return: -1 if value is not present in the array or it's null
 *        */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t count;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (count = left; count <= right; ++count)
		{
			printf("%d", array[count]);
			if (count != right)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}

