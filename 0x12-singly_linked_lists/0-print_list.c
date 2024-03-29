#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all element of a list
 * @h: pointer passed as argument
 * Return: return number of modes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
