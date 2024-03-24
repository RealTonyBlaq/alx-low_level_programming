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
	listint_t *current;
	size_t a = 0, b = sqrt(size);

	if (!list || size <= 0)
		return (NULL);
	current = list;
	while (current->n <= value)
	{
		current = jump(list, b);
		if (!current)
			return (NULL);
		printf("Value checked array[%lu] = [%d]\n", b, current->n);
		a = b;
		b += sqrt(size);
		if (a >= size)
			return (NULL);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);
	return (list_search(list, a, b, value));
}

/**
 * jump - Returns a pointer to a node in the list
 * @list: The list
 * @index: The index to be returned
 *
 * Return: A pointer, else NULL
*/
listint_t *jump(listint_t *list, size_t index)
{
	listint_t *ptr = list;

	while (ptr && ptr->index != index)
		ptr = ptr->next;
	return (ptr);
}


/**
 * list_search - Searches a list from index a to b
 * @list: The list
 * @a: Index a
 * @b: Index b
 * @value: The value to be searched
 *
 * Return: A pointer to the node, else NULL
*/
listint_t *list_search(listint_t *list, size_t a, size_t b, int value)
{
	listint_t *ptr;
	(void)b;

	ptr = jump(list, a);
	while (ptr)
	{
		if (a == b)
			break;
		printf("Value checked at index [%lu] = [%d]\n", ptr->index, ptr->n);
		if (ptr->n == value)
			return (ptr);
		ptr = ptr->next;
		a++;
	}
	return (NULL);
}
