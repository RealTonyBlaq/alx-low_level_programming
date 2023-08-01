#include "lists.h"

/**
 * listint_len - Entry point
 * @h: The node
 *
 * Description: Function returns the number of elements
 * in a linked list
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		if (h->n)
			elements++;
		h = h->next;
	}
	return (elements);
}
