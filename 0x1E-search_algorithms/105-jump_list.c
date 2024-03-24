#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers
 *				using the Jump search algorithm
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current;

	if (!list || size <= 0)
		return (NULL);
	current = list;
}


listint_t *point(listint_t *list, size_t size, int se)
