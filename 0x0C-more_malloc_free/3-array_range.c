#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: Always 0
 */

int *array_range(int min, int max)
{
	int *array, i = 0, t = min;

	if (min > max)
	{
		return (0);
	}
	array = malloc((max - min + 1) * sizeof(int));
	if (!array)
	{
		return (0);
	}
	while (i <= max - min)
	{
		array[i++] = t++;
	}
	return (array);
}
