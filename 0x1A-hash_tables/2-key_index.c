#include "hash_tables.h"

/**
 * key_index - Returns the index of a key in the hash table
 * @key: The key
 * @size: Size of the hash table
 * 
 * Return: The index where key and value will be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, s;

	hash = hash_djb2(key);
	s = size;
	while (1)
	{
		if (hash < size)
			return (hash);
		hash %= s;
	}
}
