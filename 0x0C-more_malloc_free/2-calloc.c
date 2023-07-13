#include "main.h"
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * _memset - Copies chars
 * @str: The string
 * @b: The input to be copied
 * @n: The number of bytes
 * Return: Nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - Function allocates memory to an array
 * @nmemb: The array
 * @size: The size of the array
 *
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	_memset(array, 0, (nmemb * size));
	return (array);
}
