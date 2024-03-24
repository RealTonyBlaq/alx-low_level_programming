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


/**
 * point - Returns a pointer to a list at a certain point
 *			in the list
 * @list: The list
 * @size: The size of the list
 * @index: Point in the list
 *
 * Return: Pointer to that point in the list
*/
listint_t *point(listint_t *list, size_t size, size_t index)
{
	size_t i = 0;


}
