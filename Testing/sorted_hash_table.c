#include "hash.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

/**
 * key_index - Returns the index of a key in the hash table
 * @key: The key
 * @size: Size of the hash table
 *
 * Return: The index where key and value will be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	while (1)
	{
		if (hash < size)
			return (hash);
		hash %= size;
	}
}

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the hash table
 *
 * Return: The table, else NULL
*/
shash_table_t *shash_table_create(unsigned long int size)
{
    unsigned long int i = 0;
    shash_table_t *table;

    table = malloc(sizeof(shash_table_t *));
    if (table == NULL)
        return (NULL);
    table->size = size;
    table->array = malloc(sizeof(shash_node_t) * size);
    if (table->array == NULL)
    {
        free(table);
        return (NULL);
    }
    for (i = 0; i < size; i++)
    {
        table->array[i] == NULL;
    }
    table->shead = NULL;
    table->stail = NULL;
    return (table);
}

/**
 * shash_table_set - Sets up the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with @key
 *
 * Return: 1 on success, 0 on failure
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new, *temp, *current;
    unsigned long int index;

    if (ht == NULL || !key || *key == '\0' || value == NULL)
        return (0);
    index = key_index(key, ht->size);
    new = malloc(sizeof(shash_node_t));
    if (new == NULL)
        return (0);
    new->key = strdup(key);
    new->value = strdup(value);
    if (new->value == NULL || new->key == NULL)
    {
        free(new->key);
        free(new);
        return (0);
    }
    new->next = NULL;
    new->snext = NULL;
    new->sprev = NULL;
    if (ht->array[index] == NULL)
    {
        ht->array[index] = new;
        ht->shead = new;
        ht->stail = new;
    }
    else
    {
        temp = ht->array[index];
        while (temp)
        {
            if (strcmp(temp->key, key) == 0)
            {
                strcpy(temp->value, new->value);
                return (1);
            }
            temp = temp->next;
        }
        current = ht->array[index];
        while (current)
        {
            if (current->key[0] > new->key[0])
            {
                new->next = current;
                new->snext = current;
                if (current->sprev == NULL)
                    current->sprev = new;
                else
                {
                    temp = current->sprev;
                    current->sprev = new;
                    new->sprev = temp;
                }
                current = new;
                return (1);
            }
            if (current->next == NULL)
            {
                new->sprev = current;
                current->next = new;
                break;
            }
            current = current->next;
        }
    }
    return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a key
 * @ht: The shash table
 * @key: The key whose value is to be retrieved
 *
 * Return: The key, else NULL
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int i = 0;
    shash_node_t *temp;

    if (ht == NULL || key == NULL)
        return NULL;
    while (i < ht->size)
    {
        if (ht->array[i])
        {
            temp = ht->array[i];
            while (temp)
            {
                if (strcmp(temp->key, key) == 0)
                    return (temp->value);
                temp = temp->next;
            }
        }
        i++;
    }
    return (NULL);
}
