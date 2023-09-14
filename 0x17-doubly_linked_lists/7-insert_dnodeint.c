#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at index(idx)
 * @h: The list
 * @idx: The index
 * @n: The data(n) of the new node
 *
 * Return: The address of the new node, else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *tmp = *h, *ptr = NULL;
	unsigned int count, i = 0;

	if (h == NULL)
		return (NULL);
	count = node_count(tmp);
	if (idx > count - 1)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	ptr = *h;
	while (ptr != NULL && i < idx)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
		return (NULL);
	if (ptr->next == NULL)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = ptr;
	new->next = ptr->next;
	ptr->next->prev = new;
	ptr->next = new;
	return (new);
	return (NULL);
}


/**
 * node_count - Counts the number of nodes in a list
 * @head: The list
 *
 * Return: The count
 */
unsigned int node_count(dlistint_t *head)
{
	unsigned int nodes = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		nodes++;
		current = current->next;
	}
	return (nodes);
}
