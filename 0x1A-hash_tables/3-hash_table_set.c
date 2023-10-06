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
	hash_node_t *new, *temp = NULL;

	if (ht == NULL || !key || *key == '\0' || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	if (new->key == NULL || new->value == NULL)
	{
		free(new->key);
		free(new->value);
		free(new);
		return (0);
	}
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				strcpy(temp->value, new->value);
				free(new->key);
				free(new->value);
				free(new);
				return (1);
			}
			temp = temp->next;
		}
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
