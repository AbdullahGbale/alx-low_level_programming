#include "lists.c"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t list.
 * @h: Pointer to a pointer to the head (start) of the list.
 * @idx: The index of the list where the new node should be added, starting from 0.
 * @n: The integer value to be stored in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    if (h == NULL)
        return NULL;

    dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;

    if (idx == 0)
    {
        new_node->prev = NULL;
        new_node->next = *h;
        if (*h != NULL)
            (*h)->prev = new_node;
        *h = new_node;
        return new_node;
    }

    dlistint_t *current = *h;
    unsigned int current_idx = 0;

    while (current != NULL && current_idx < idx - 1)
    {
        current = current->next;
        current_idx++;
    }

    if (current == NULL)
    {
        free(new_node);
        return NULL;
    }

    new_node->prev = current;
    new_node->next = current->next;
    if (current->next != NULL)
        current->next->prev = new_node;
    current->next = new_node;

    return (new_node);
}
