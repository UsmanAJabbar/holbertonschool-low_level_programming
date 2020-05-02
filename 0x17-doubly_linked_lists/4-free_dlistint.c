#include "lists.h"

/**
 * free_dlistint - frees all doubly linked
 * lists until NULL terminated
 * @head: linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *captured;

	while (head != NULL)
	{
		temp = head; /* Copy the new incremented node */
		captured = temp->next; /* Move the node forward before freeing */
		free(temp); /* Free */
	}
}
