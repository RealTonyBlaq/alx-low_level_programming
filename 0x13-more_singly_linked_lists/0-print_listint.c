#include "lists.h"

/**
 * print_listint - Prints a list
 * @h: The head node
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (-1);
	}
	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
