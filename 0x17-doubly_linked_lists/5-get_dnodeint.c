#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head (start) of the list.
 * @index: The index of the desired node, starting from 0.
 * Return: Pointer to the nth node, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (current_index == index)
			return (current);

		current = current->next;
		current_index++;
	}

	return (NULL);
}
