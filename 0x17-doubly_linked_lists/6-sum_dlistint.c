#include "lists.h"

/**
 * sum_dlistint - Returns sum of all data values in a dlistint_t linked list.
 * @head: Pointer to the head (start) of the list.
 * Return: Sum of all data values, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
