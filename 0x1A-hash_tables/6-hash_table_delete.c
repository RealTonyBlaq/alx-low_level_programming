#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 *
 * Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				current = temp;
				temp = temp->next;
				free(current);
			}
		}
		free(ht->array[i]);
		i++;
	}
	free(ht);
}
