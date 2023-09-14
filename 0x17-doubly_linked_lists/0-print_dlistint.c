#include "lists.h"

/**
 * print_dlistint - Prints all elements of dlistint_t list
 * @h: The head node
 *
 * Return: Node count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = h;

	if (h == NULL)
		return (0);
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
