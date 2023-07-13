#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function allocates memory to an array
 * @nmemb: The array
 * @size: The size of the array
 *
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	free(array);
	return (array);
}
