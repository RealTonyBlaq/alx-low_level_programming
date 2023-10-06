#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element to the hash table
 * @ht: The hash table; which is an array of hash_nodes
 * @key: The key; which would be used to generate an index
 * @value: The value to be attached with @key
 *
 * Return: 1 on success, 0 on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *ptr = NULL, *temp = NULL;

	if (ht == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		perror("Malloc failed\n");
		return (0);
	}
	strcpy(new->key, key);
	new->value = strdup(value);
	new->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		ptr = ht->array[index];
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				temp->value = strdup(value);
				free(new);
				return (0);
			}
			temp = temp->next;
		}
		new->next = ptr;
		ht->array[index] = new;
	}
	return (0);
}
