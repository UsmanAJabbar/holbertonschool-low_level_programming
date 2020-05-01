#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end
 * of the list
 * @head: address to the linked list
 * @n: data to add to our new linked list
 * Return: Returns the address of the new node || NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head; /* Keep a copy of head */
	dlistint_t *back_of_the_queue = malloc(sizeof(dlistint_t));

	/* Malloc Check */
	if(back_of_the_queue == NULL)
	{
		free(back_of_the_queue);
		return(NULL);
	}

	/* Add/Populate Data into our new node */
	back_of_the_queue->n = n;
	back_of_the_queue->next = NULL;

	/* If head's empty, return the new node */
	if(*head == NULL)
	{
		back_of_the_queue->prev = NULL;
		*head = back_of_the_queue;
		return(*head);
	}

	/* Get to the end of the linked list */
	for(; temp->next != NULL; temp = temp->next)
	{
		;
	}
	/* new node's previous points to the last temp node */
	back_of_the_queue->prev = temp;
	/* Now change temp->next to point to our new node */
	temp->next = back_of_the_queue;

	return(back_of_the_queue);
}
