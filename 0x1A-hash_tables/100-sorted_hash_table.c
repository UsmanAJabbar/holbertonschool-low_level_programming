#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size to create hash table with
 * Return: Returns the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = malloc(sizeof(hash_table_t));
	unsigned long int index;

	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table->array), free(new_table);
		return (NULL);
	}

	for (index = 0; index < size; index++)
		new_table->array[index] = NULL;

	return (new_table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new, *oldhead, *search;

	if (!ht || !key || strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	for (search = ht->array[index]; search; search = search->next)
		if (strcmp(search->key, key) == 0)
		{
			free(search->value);
			search->value = strdup(value);
			return (1);
		}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);
	new->value = strdup(value);
	new->key = strdup(key);
	seeker(ht, array[index], index); /* Handles sPrev and sNext */

	/* CASE 1: If a singly linked list isn't there */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		new->next = NULL;
	}

	/* CASE 2: If a singly linked list is there, make one */
	else
	{
		oldhead = ht->array[index];	/* Keep a copy of our current head */
		new->next = oldhead;		/* Our new node should now point to old head */
		ht->array[index] = new;		/* Make our new node the head */
	}
	return (1);
}

void *seeker(shash_table_t *ht, shash_node_t *node, unsigned long int arrayindex)
{
	unsigned long int index = keyindex((const char *)node->key, ht)

	for (search = ht->array[index]; search; search = search->next)
		if (strcmp(search->key, key) == 0)
		{
			if (arrayindex > index)
				node->snext = search;
			else
				node->sprev = search;
		}
}

void sprint(shash_table_t *ht)
{
	unsigned long int index;
	int flag = 0;
	hash_node_t *temp;

	if (ht)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index] == NULL)
				continue;

			if (ht->array[index])
				for (temp = ht->array[index]; temp; temp = temp->snext)
				{
					if (flag == 1)
						printf(", ");
					printf("'%s': '%s'", temp->key, temp->value), flag = 1;
				}
		}
		printf("}\n");
	}
}

int main(void)
{
	shash *ht = shash_table_create(1024);
	shash_table_set(ht, "y", "0");
	shash_table_print(ht);
	shash_table_set(ht, "j", "1");
	shash_table_print(ht);
	shash_table_set(ht, "c", "2");
	shash_table_print(ht);
	shash_table_set(ht, "b", "3");
	shash_table_print(ht);
	sprint(ht);
	return (0);
}
