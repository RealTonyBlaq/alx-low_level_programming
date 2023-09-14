#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at index
 * @head: The list
 * @index: The index
 *
 * Return: The node, else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0, node_len;

	if (head == NULL)
		return (NULL);
	node_len = node_count(head);
	if (index > node_len - 1)
		return (NULL);
	while ((node != NULL) && (i < index))
	{
		node = node->next;
		i++;
	}
	return (node);
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
