#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees all nodes
 * @head: imports head
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
