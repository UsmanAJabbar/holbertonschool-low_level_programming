#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements
 * from nodes contained in a linked list
 * @h: -> pointer to the node
 * Return: Returns index since index carries
 * how many nodes it went through.
 */

size_t print_list(const list_t *h)
{
	size_t index = 0;

	for (index = 0; h != NULL; index++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

return (index);
}
