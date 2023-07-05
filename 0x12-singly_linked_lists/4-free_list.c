#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: head of the node
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
