#include "hash_tables.h"

/**
 * hash_table_delete - gets rid of the
 * hashtable
 * @ht: hash table
 * Return: Always Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
		if (ht->array[index] != NULL)
			free_stack(ht->array[index]);
	free(ht->array); /* 233 | 8245 */
	free(ht); /* Frees the hash table */
}

/**
 * free_stack - frees the stack
 * @head: doubly linked list
 * Return: Always Void
 */
void free_stack(hash_node_t *head)
{
	hash_node_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->value);
		free(temp->key);
		free(temp);
	}
}
