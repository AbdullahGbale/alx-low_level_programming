#include "lists.h"

/**
 * add_nodeint - adds a new node in front of a linked list
 * @head: points to the first node
 * @n: vakue to be stored in  new node
 * Return: point to new node, or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
