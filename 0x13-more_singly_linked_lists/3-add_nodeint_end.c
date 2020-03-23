#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds new node to the end
 * of the file
 * @head: contains the address of head
 * @n: contains a number to be saved
 * Return: NULL | last_node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node, *temp;

	/* malloc + malloc check */
	last_node = malloc(sizeof(listint_t));
	if (last_node == NULL)
	{
		free(last_node);
		return (NULL);
	}

	/* Created new node with data, not yet connected */
	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
	}

	else
	{
		temp = *head; /* use temp to get to the last node from head */

		/* increment temp until it gets to the last node */
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		/* got to the last node, connect temp->next with last_node */
		temp->next = last_node;
	}

return (last_node);
}
