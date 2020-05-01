#include "lists.h"

/**
 * print_dlistint - prints all of the integers in
 * the linked list
 * @h: Linked list
 * Return: Returns the number of index found
 * and printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	int index;

	/* Check if h exists */
	if (h == NULL)
		return (0);

	/* Print all of the elements */
	for (; h != NULL; index++, h = h->next)
		printf("%d\n", h->n);

	/* Return the number of lists printed */
	return (index);
}
