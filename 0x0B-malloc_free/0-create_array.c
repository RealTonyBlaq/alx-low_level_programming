#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function creates an array of Chars
 * @size: Size of the array
 * @c: The Array of characters
 *
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[i] = '\0';
	return (array);
}
