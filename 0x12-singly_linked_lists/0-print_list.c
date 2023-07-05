#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all element of a list
 * @h: pointer passed as argument
 * Return: return number of modes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (count);
	}
	printf("[");
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("%s", h->str);
		}
		else
		{
			printf("[0] (nil)");
		}

		count++;
		h = h->next;

		if (h != NULL)
		{
			printf(", ");
		}
	}
	printf("]\n");

	return (count);
}

