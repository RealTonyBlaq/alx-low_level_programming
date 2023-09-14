#include "lists.h"

/**
 * sum_dlistint - Sums all the data(n) in a dlistint_t list
 * @head: The list
 *
 * Return: The summed data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
