#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - Executes functions given as parameter
 * @array: The array
 * @size: The size of the array
 * @action: The function pointer
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
