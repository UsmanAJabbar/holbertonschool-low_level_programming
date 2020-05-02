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
	dlistint_t *temp = *h, *moveasidepls = malloc(sizeof(dlistint_t));
	unsigned int nodecount;

	if (moveasidepls == NULL) /* Malloc Check */
		return (NULL);
	moveasidepls->n = n; /* Add universal data */
	if (*h == NULL) /* If the linked list is empty */
	{
		moveasidepls->next = NULL, moveasidepls->prev = NULL;
		*h = moveasidepls;
		return (*h);
	}
	/* If we need to insert the new node @ the 0th index */
	if ((idx == 0) && (temp->next != NULL))
	{
		moveasidepls->prev = NULL, moveasidepls->next = temp;
		temp->prev = moveasidepls, *h = moveasidepls;
		return (moveasidepls);
	}
	/* Loop until the required index */
	for (nodecount = 0; nodecount < idx; nodecount++, temp = temp->next)
	{
		if (temp->next == NULL) /* Check if we have enough nodes */
			return (NULL);
	}
	/* Check if we're at the last node */
	if (temp->next == NULL)
	{
		moveasidepls->prev = temp, moveasidepls->next = NULL;
		temp->next = moveasidepls;
		return (moveasidepls);
	}
	/* Else, we must be at the middle, insert the node at that index */
	moveasidepls->next = temp; /* new node should point to current temp */
	moveasidepls->prev = temp->prev; /* newnode should point to temp prev node */
	temp->prev->next = moveasidepls; /* Point the prev temp->next to new node */
	temp->prev = moveasidepls;
	return (moveasidepls);
}
