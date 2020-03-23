#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds node to the front of
 * the list
 * @head: contains the address to head
 * @n: value imported
 * Return: Returns the address of the new head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	/* malloc + malloc check */
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n; /* saves n into newnode's n attribute */
	newnode->next = *head; /* connects orphaned node to head (*head = &head) */
	*head = newnode; /* makes newnode the head now */

return (*head);
}
