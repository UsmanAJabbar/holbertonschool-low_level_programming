#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees all
 * nodes pointed to a pointer to
 * the head.
 * @head: pointer pointing to the
 * address of head
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp; /* temp node to avoid changing head */

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = *head; /* temp now has address to the next node */
		*head = temp->next; /* update head to increment */
		free(temp); /* free the block */
	}
	*head = NULL; /* set head to null */
}
