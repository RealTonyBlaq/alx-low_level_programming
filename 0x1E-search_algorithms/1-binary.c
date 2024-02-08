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
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)

