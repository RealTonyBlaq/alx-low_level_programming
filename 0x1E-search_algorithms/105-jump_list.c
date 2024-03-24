#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers
 *				using the Jump search algorithm
 * @list: The list
 * @size: The size of the list
 * @value: Value to be found
 *
 * Return: Point to the node, else NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current = list, *ptr;
	size_t a = 0, b = 0;

	if (!list || size <= 0)
		return (NULL);
	while (current->n < value)
	{
		ptr = point(list, b);
		printf("Value checked array[%lu] = [%d]\n", b, ptr->n);
		a = b;
		b = b + sqrt(size);
	}
}

listint_t *point(listint_t *list, size_t index)
{
	listint_t *ptr = list;

	while (ptr)
	{
		if (ptr->index == index)
			return (ptr);
		ptr = ptr->next;
	}
	return (NULL);
}
