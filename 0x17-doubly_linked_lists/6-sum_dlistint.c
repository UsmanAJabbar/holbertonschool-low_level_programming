#include "lists.h"
/**
 * sum_dlistint - sums all int values in
 * linked lists
 * @head: linked list
 * Return: Returns SUM
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head; /* Saves a copy of the head */
	int sum = 0;

	/* Loop through all the linked lists */
	for(; temp != NULL; temp = temp->next)
	{
		/* Access the values inside the list */
		/* Add onto sum every single time */
		sum = sum + temp->n;
	}
	return(sum);
}
