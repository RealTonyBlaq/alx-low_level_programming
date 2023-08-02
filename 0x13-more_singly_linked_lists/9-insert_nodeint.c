#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a point
 * @head: The node
 * @idx: The index (point)
 * @n: The data
 * Description: Function inserts a new node at a given position
 *
 * Return: Address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int point;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	point = 0;
	while (point < idx)
	{
		*head = (*head)->next;
		point++;
	}
	if (*head == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *(head);
	*head = new;
	return (new);
}
