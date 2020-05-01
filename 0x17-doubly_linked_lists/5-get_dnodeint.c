#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: address of the linked list
 * @index: index to return
 * Return: Return NULL || nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head; /* Stores the address of the head */
	dlistint_t *capturednode; /* Will store the captured node */
	unsigned int nodeindex;

	/* If head's empty, return NULL */
	if (head == NULL)
		return (NULL);

	for(nodeindex = 0; nodeindex < index; nodeindex++, temp = temp->next)
	{
		/* Checks if temp's null aka if we're out of nodes */
		if(temp == NULL)
			return(NULL);
	}
	/* If we had enough nodes, then we should've successfully break'ed */
	capturednode = temp; /* Now return the node */
	return(capturednode);
}
