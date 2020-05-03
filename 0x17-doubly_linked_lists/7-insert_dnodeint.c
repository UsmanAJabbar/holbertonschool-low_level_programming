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
	if (*h == NULL && idx == 0) /* If the linked list is empty */
	{
		moveasidepls->next = NULL, moveasidepls->prev = NULL;
		*h = moveasidepls;
		return (*h);
	}
	if (*h == NULL || h == NULL)
		return (NULL);
	/* If we need to insert the new node @ the 0th index */
	if ((idx == 0) && (temp->next != NULL))
	{
		moveasidepls->prev = NULL, moveasidepls->next = temp;
		temp->prev = moveasidepls, *h = moveasidepls;
		return (moveasidepls);
	}
	/* Loop until the required index */
	for (nodecount = 0; nodecount < idx - 1; nodecount++, temp = temp->next)
		if (temp == NULL)
			return (NULL);

	/* Assigning values to new node */
	moveasidepls->prev = temp, moveasidepls->next = temp->next;

	/* Connecting temp to new node */
	if (temp->next != NULL)
		temp->next->prev = moveasidepls;

	if (temp->next == NULL)
		moveasidepls->next = NULL, moveasidepls->prev = temp;

	temp->next = moveasidepls;
	return (moveasidepls);
}
