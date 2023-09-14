#include "lists.h"

/**
 * dlistint_len - Returns the number of elem in a dlistint_t list
 * @h: The head pointer to the list
 *
 * Return: Elem count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem = 0;
	const dlistint_t *ptr = h;

	if (h == NULL)
		return (0);
	while (ptr != NULL)
	{
		elem++;
		ptr = ptr->next;
	}
	return (elem);
}
