#include "search_algos.h"
#include <math.h>

/**
* jump_search - Searches for an element in an array using
*				the jump search algorithm
* @array: The array
* @size: Size of the array
* @value: The element to be searched
*
* Return: The index of the searched element, otherwise -1.
*/

int jump_search(int *array, size_t size, int value)
{
	size_t a, b;

	if (array)
	{
		b = 0;
		while (array[b] < value)
		{
			printf("Value checked array[%lu] = %d\n", b, array[b]);
			a = b;
			b = b + sqrt(size);
			if (a >= size)
				return (-1);
		}
		printf("Value found between indexes [%lu] and [%lu]\n", a, b);
		return (lin_search(array, a, b, value));
	}
	return (-1);
}

/**
 * lin_search - Performs linear search on a jump point
 * @array: The array
 * @start: The starting index
 * @finish: The last index
 * @v: The searched value
 *
 * Return: The index if found.
*/
int lin_search(int *array, size_t start, size_t finish, int v)
{
	size_t i;

	for (i = start; i <= finish; i++)
	{
		printf("Value checked array[%lu] = %d\n", i, array[i]);
		if (array[i] == v)
			return (i);
	}
	return (-1);
}
