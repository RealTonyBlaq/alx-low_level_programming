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
	size_t i, pos, low, high;
	
	high = size, low = 0;
	pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
	

}
