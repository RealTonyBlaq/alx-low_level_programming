#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Function searches for an integer
 * @array: An array
 * @size: Size of the array
 * @cmp: pointer to te function that compares values
 *
 * Return: index of the first element function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (!array)
	{
		return (0);
	}
	if (cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)))
			{
				return (i);
			}
		}
	}
	return (-1);
}
