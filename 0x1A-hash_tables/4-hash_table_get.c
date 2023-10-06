#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key
 * @ht: The hash table
 * @key: The key whose associated value is to be retrieved
 *
 * Return: The value (on success), else NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *temp;

	if (ht == NULL || !key || *key == '\0')
		return (NULL);
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				if (strcmp(temp->key, key) == 0)
				{
					return (temp->value);
				}
				temp = temp->next;
			}
		}
		i++;
	}
	return (NULL);
}
