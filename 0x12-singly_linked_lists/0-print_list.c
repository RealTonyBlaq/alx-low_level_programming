#include "lists.h"

/**
 * print_list - Prints the elements in a linked list
 * @h: A pointer to a list
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		node_count++;
	}
	return (node_count);
}
