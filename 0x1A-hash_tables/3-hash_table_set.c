#include "hash_tables.h"

/**
 * hash_table_set - adds an element
 * to the hash table.
 * @ht: hash table
 * @key: key to be inserted
 * @value: value to be inserted
 * Return: 0 on Failure | 1 on Success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	char *dup_key = strdup(key);
	char *dup_value = strdup(value);
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	hash_node_t *formerheadcopy;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || new_node == NULL)
		return(0);

	new_node->value = dup_value;
	new_node->key = dup_key;

	/* Add node to the beginning of the list */
	/* CASE 1: If a singly linked list isn't there */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		new_node->next = NULL;
	}

	/* CASE 2: If a singly linked list is there, make */
	/* new node the head and connect it to the rest of */
	/* the original list */
	else
	{
		formerheadcopy = ht->array[index];	/* Keep a copy of our current head */
		new_node->next = formerheadcopy; 	/* Our new node should now point to old head */
		ht->array[index] = new_node; 		/* Make our new node the head */
	}

	temp = ht->array[index];
	while(temp)
	{
		printf("%s\n", temp->key);
		temp = temp->next;
	}	
	return(0);
}
