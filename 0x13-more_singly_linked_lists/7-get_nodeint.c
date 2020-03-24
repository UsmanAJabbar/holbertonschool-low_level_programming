#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - fetches and returns
 * the nth node.
 * @head: - starting of the list
 * @index: - limiter
 * Return: Return's all of the nodes
 * upto the limiter
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodeindexer; /* indexes through the nodes upto 'index' */
	listint_t *temp = head; /* temporary node to avoid messing head */
	listint_t *capturednode; /* extra node for readability purposes */

	/* loop to the indexth node */
	for (nodeindexer = 0; nodeindexer < index; nodeindexer++)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next; /* enter as many indexes as 'index' limits */
	}
	capturednode = temp; /* copy the current temp[index] node into capturednode */

return (capturednode); /* return the nth node */
}
