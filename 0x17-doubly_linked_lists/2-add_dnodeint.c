#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning
 * of the list
 * @head: address to the linked list
 * @n: data to be added to the new node
 * Return: Returns NULL || *new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head; /* Stores the address of head */
	dlistint_t *da_new_king = malloc(sizeof(dlistint_t)); /* Our new node */

	/* Check if malloc failed */
	if (da_new_king == NULL)
	{
		free(da_new_king);
		return (NULL);
	}

	/* Populating data into the new node */
	da_new_king->n = n;
	da_new_king->prev = NULL;

	/* If *head's empty, then set our newnode */
	/* to be the head with prev and next == NULL */
	if (*head == NULL)
	{
		da_new_king->next = NULL; /* Terminate the linked list */
		*head = da_new_king; /* Copy new node to *head */
		return (*head);
	}

	/* Since our new node's supposed to become the head */
	/* the next node is the only variable to play with */
	/* If head wasn't null, now's the time to connect it */
	else
	{
		da_new_king->next = temp; /* Else our new node should point to head */
		*head = da_new_king; /* Our new node is now the head */
		return (*head);
	}
}
