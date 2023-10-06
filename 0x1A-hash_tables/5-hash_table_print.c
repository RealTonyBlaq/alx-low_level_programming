#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 *
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i = 0, flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				if (flag == 1)
					printf(", ");
				printf("\'%s\': \'%s\'", temp->key, temp->value);
				temp = temp->next;
				flag = 1;
			}
		}
		i++;
	}
	printf("}\n");
}
