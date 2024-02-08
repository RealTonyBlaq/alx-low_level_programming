#include "search_algos.h"

/*
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
	size_t i = 0, mid = (size - 1) / 2;
	size_t start = 0, finish = size, first = 0, last = size;;

	if (array)
	{
		while (i < size)
		{
			my_print(array, start, finish);
			if (array[mid] > value)
			{
				start = first;
				finish = mid;
			}
			else if (array[mid] < value)
			{
				start = mid + 1;
				finish = last;
			}
			else
				return (mid);
			first = start;
			last = finish;
			mid /= 2;
			i++;
		}
	}
	return (-1);
}

/*
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
			printf(",");
	}
	printf("\n");
}
