#include "search_algos.h"

/**
* int linear_search - Searches an array for a value using the
                    linear search algorithm
* @array: The array
* @size: Size of the array
* @value: Value to be searched
* Return: The index where @value is located
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (array == NULL || size == 0)
        return(-1);
    while (i < size)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (1);
        i++;
    }
    return (-1);
}
