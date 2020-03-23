#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all of the int
 * elements from attribute n in the
 * listint_t struct
 * @h: imports struct
 * Return: Returns # of nodes it went through
 * before the node's h->next didn't have
 * the address to the next node (aka null)
 */

size_t print_listint(const listint_t *h)
{
	size_t node;

	if (h) /* if h has something (aka not null) */
	{
		for (node = 0; h != NULL; node++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}
return (node); /* return number of nodes entered | counts nodes */
}
