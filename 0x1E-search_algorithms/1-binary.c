#include "search_algos.h"

/**
 * binary_search - Algorthis searches for a value using binary
 *			search.
 * @array: The array
 * @size: Size of the array
 * @value: Value to be searched
 *
 * Return: The index where the element was found,
 *		otherwise -1 is returned.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, finish = size - 1, mid;

	if (array)
	{
		while (start <= finish)
		{
			mid = start + (finish - start) / 2;
			my_print(array, start, finish);
			if (array[mid] > value)
				finish = mid - 1;
			else if (array[mid] < value)
				start = mid + 1;
			else
				return (mid);
		}
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
