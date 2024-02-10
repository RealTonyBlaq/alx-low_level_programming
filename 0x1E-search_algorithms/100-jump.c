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
	if (array[jump_point] > value)
	{
		
	}
}
