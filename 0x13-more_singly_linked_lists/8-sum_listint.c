#include "lists.h"

/**
 * sum_listint - Sums up all the data (n)
 * of type int of a listint_t list
 * @head: The node
 *
 * Return: The sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
