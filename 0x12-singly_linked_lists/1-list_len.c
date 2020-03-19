#include <stdio.h>
#include "lists.h"

/**
 * list_len - counts the number of
 * nodes and returns the total count
 * of nodes found
 * @h: -> pointer to the nodes
 * Return: nodecount
 */

size_t list_len(const list_t *h)
{
	size_t nodecount = 0;

	while (h != NULL)
	{
		nodecount++;
		h = h->next;
	}
return (nodecount);
}
