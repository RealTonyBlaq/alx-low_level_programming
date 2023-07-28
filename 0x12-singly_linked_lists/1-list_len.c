#include "lists.h"

/**
 * list_len - Program returns number of elements
 * in the list
 * @h: Pointer to list_t
 *
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elem_count = 0;

	while (h != NULL)
	{
		if (h->str || h->len)
			elem_count++;
		h = h->next;
	}
	return (elem_count);
}
