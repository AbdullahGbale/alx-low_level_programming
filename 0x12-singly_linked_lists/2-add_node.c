#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that that takes pointer to the head of the list
 * @head: head of the node
 * @str: string of elements
 * Return: returns a new node to be added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
