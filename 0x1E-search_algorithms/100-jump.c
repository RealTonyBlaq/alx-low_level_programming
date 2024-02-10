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
	size_t i, jump_point = sqrt(size);

	if (!array)
		return (-1);
	printf("Value checked array[%d] = %d\n", 0, array[0]);
	if (array[0] == value)
		return (0);
	else
	{
		if (array[jump_point] > value)
		{

		}
	}
}

/**
 * lin_search - Performs linear search on a jump point
 * @array: The array
 * @start: The starting index
 * @finish: The last index
 * @v: The searched value
 *
 * Return: The index if found
*/
int lin_search(int *array, size_t start, size_t finish, int v)
{
	size_t i;

	for (i = start; i <= finish; i++)
	{
		if (array[i] == v)
			return (i)
	}
}
