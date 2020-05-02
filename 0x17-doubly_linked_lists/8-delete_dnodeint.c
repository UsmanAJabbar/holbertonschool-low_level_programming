#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at
 * a specific index defined by @index
 * @index: nth node to free
 * @head: linked list
 * Return: 1 on success | -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head; /* Keeping a copy of the 1st node */
	unsigned int nodeindex;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		/* Move the head forward to avoid errors */
		/* Since temp still holds the old head, free it */
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/* Loop to that specific node */
	for (nodeindex = 0; nodeindex < index; nodeindex++, temp = temp->next)
	{
		if (temp->next == NULL)
			return (-1);
	}

	/* Check if the node to tbe deleted is the last node */
	if (temp->next == NULL)
	{
		temp->prev->next = NULL
		free(temp);
		return(1);
	}
	/* Go to the node before it and point it to the node after our current node */
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
