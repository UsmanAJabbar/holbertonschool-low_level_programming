#include "lists.h"

/**
 * dlistint_len - returns the number of linked
 * lists found
 * @h: linked list
 * Return: Returns the number of linked lists
 * found
 */
size_t dlistint_len(const dlistint_t *h)
{
	int index; /* Will store number of indexes looped */

	/* Loop through all the linked lists until NULL */
	for(; h != NULL; index++, h = h->next)
		;

	return(index);
}
