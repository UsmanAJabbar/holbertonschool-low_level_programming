#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - adds node
 * to anywhere in the index
 * @head: imports address of head
 * @idx: index where node should be added
 * @n: int to be added in the new node
 * Return: Returns the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i; /* used for the for loop */
	listint_t *temp = *head; /* copies *head contents to temp */
	listint_t *newnode = malloc(sizeof(listint_t)); /*newnode*/

	/* newnode - malloc check */
	if (newnode == NULL)
	{
		return (NULL);
	}

	/* No nodes, return the existing node */
	if (idx == 0)
	{
		return (temp);
	}

	/* get to the nth index referred by idx */
	for (i = 0; i < idx - 1; i++)
	{
		/* check if idx is more than the # of nodes */
		if (temp->next == NULL)
		{
			return (NULL);
		}

		/* else, continue incrementing */
		temp = temp->next;
	}

	/* now that you're there, create a new node */
	/* copy what temp->next was pointing to */
	/* now newnode should point to the same node */
	/* temp->next was pointing to */
	newnode->n = n; /* copy given data into it */
	newnode->next = temp->next; /* copy the address of temp->next */

	/* get temp->next to point to our new node */
	temp->next = newnode;

return (newnode);
}
