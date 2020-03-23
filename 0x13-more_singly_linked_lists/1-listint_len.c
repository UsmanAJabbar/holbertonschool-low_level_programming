#include <stdio.h>
#include "lists.h"

/**
 * listint_len - counts and returns
 * number of nodes
 * @h: imports struct with singly linked lists
 * Return: Returns max nodecount
 */

size_t listint_len(const listint_t *h)
{
	size_t nodecount;

	if (h) /* if h is not null */
	{
		for (nodecount = 0; h != NULL; nodecount++)
		{
			h = h->next; /* go to the next node */
		}
	}
return (nodecount); /* return number of nodes nodecount went through */
}
