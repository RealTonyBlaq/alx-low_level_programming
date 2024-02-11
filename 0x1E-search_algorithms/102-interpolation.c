#include "search_algos.h"

/**
 * interpolation_search - Finds an element in an array using the
 *							interpolation search algorithm
 * @array: The array
 * @size: The length of the array
 * @value: The value to be sought
 *
 * Return: The index of the searched element, otherwise -1.
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (!array)
		return (-1);
	high = size - 1, low = 0;
	while (low < high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *\(value - array[low]));
		if (pos < size)
		{
			printf("Value checked array[%lu] = %d\n", pos, array[pos]);
			if (array[pos] == value)
				return (pos);
		}
		else
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		low++;
		high -= 2;
	}
	return (-1);

}
