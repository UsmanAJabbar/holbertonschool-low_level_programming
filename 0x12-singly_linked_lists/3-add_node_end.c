#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds node to the end
 * @head: header address
 * @str: string
 * Return: Returns new string
 */

list_t *add_node_end(list_t **head, const char *str)
{

	/* allocating space for the new node */
	list_t *new = malloc(sizeof(list_t));
	list_t *last;
	char *string = strdup(str);

	/* malloc check */
	if (new == NULL)
	{
		free(string);
		return (NULL);
	}

	new->str = string;
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new;

	return (new);
}

/**
 * _strlen - function prints length
 * @s: pointer imported from c
 * Return: (0)
 */

int _strlen(const char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
