#include "lists.h"

/**
 * list_len - function that returns the number of elements in a list
 * @h: pointer passed as argument
 * Return: returns the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
