#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * at the specified index
 * @head: contains the address of head
 * @index: what node to delete
 * Return: -1 | 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *afternode = malloc(sizeof(listint_t));
	unsigned int node;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}

	else
	{
		for (node = 0; node < index; node++)
		{
			temp = temp->next; /* Get to the required index + 1 (TBDel)*/
		}

		afternode->next = temp->next; /* copy the address of next */
		free(temp); /* remove the current node */

		/* linked lists can't be indexed in reverse, get to the required index */
		temp = *head; /* resetting temp */
		for (node = 0; node < index - 1; node++)
		{
			temp = temp->next; /* get to the required index */
		}
		temp->next = afternode->next; /* copy addr of node after deleted node */
	}
return (1);
}
