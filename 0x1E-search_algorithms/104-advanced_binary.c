#include "search_algos.h"

/**
 * advanced_binary - Algorithm searches for a value using the
 *			advanced binary search algorithm.
 * @array: The array
 * @size: Size of the array
 * @value: Value to be searched
 *
 * Return: The index where the element was found,
 *		otherwise -1 is returned.
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (bin_recursive(array, 0, size - 1, value));
}


int bin_recursive(int *array, size_t start, size_t finish, int value)
{
	size_t mid;

	if (!array)
		return (-1);
	if (start <= finish)
	{
		mid = start + (finish - start) / 2;
		my_print(array, start, finish);
		if (array[mid] > value)
		{
			finish = mid - 1;
			return (bin_recursive(array, start, finish, value));
		}
		else if (array[mid] < value)
		{
			start = mid + 1;
			return ((array, start, finish, value));
		}
		else
			return (mid);
	}
	return (-1);
}

/**
 * my_print - Prints the array with a format
 * @array: The array
 * @start: The first index of the array
 * @finish: The last index of the array
 *
 * Return: Nothing
 */

void my_print(int *array, size_t start, size_t finish)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= finish; i++)
	{
		printf("%d", array[i]);
		if (i != finish)
			printf(", ");
	}
	printf("\n");
}
