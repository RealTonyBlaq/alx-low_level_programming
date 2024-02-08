#include "search_algos.h"

/**
* linear_search - Searches an array for a value using the
*			linear search algorithm
* @array: The array
* @size: Size of the array
* @value: Value to be searched
* Return: The index where @value is located
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
