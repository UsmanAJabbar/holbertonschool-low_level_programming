#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at
 * the nth index defined by idx
 * @h: linked list
 * @idx: index to add newnode to
 * @n: value to import into new node
 * Return: Returns address new node || NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *moveasidepls = malloc(sizeof(dlistint_t));
	unsigned int nodeindex;

	/* Malloc Check */
	if (moveasidepls == NULL)
	{
		free(moveasidepls);
		return (NULL);
	}
	/* Add universal basic data */
	moveasidepls->n = n;
	/* If the linked list is empty */
	if (*h == NULL)
	{
		moveasidepls->next = NULL, moveasidepls->prev = NULL;
		return (moveasidepls);
	}
	/* Loop until the required index */
	for (nodeindex = 0; nodeindex < idx - 1; nodeindex++, temp = temp->next)
	{
		/* Check if we're out of nodes */
		if (temp->next == NULL)
			return (NULL);
	}
	/* Check if we're at the last node */
	if (temp->next == NULL)
	{
		moveasidepls->next = NULL, moveasidepls->prev = temp;
		temp->next = moveasidepls;
		return (moveasidepls);
	}
	/* Else, insert the node at that index */
	moveasidepls->next = temp; /* new node should point to current temp */
	moveasidepls->prev = temp->prev; /* newnode should point to temp prev node */
	temp->prev->next = moveasidepls;
	return (moveasidepls);
}
