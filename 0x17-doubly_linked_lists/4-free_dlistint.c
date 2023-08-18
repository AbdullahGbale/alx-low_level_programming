#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head (start) of the list.
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
    while (current != NULL)
    {
        dlistint_t *temp = current;
        current = current->next;
        free(temp);
    }
}
