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
	listint_t *current = *head;
	unsigned int point;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *(head);
		*head = new;
		return (new);
	}
	point = 0;
	while ((point < idx - 1) && current != NULL)
	{
		current = current->next;
		point++;
	}
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
