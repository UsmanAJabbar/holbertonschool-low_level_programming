#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sums all nodes
 * @head: imports first node
 * Return: Returns 0 as the sum if head's null
 * else the max sum
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head; /* copy head node to temp */
	int node; /* simply used for the for loop */
	int sum = 0; /* initializing sum with 0 */

	if (head) /* if head has something */
	{
		for (node = 0; temp != NULL; node++)
		{
			sum = sum + temp->n; /* extract ->n value, add and update sum */
			temp = temp->next; /* move to the next index */
		}
	}
return (sum); /* returns the sum */
}
