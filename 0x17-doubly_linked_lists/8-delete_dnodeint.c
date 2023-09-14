#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index
 * @head: The list
 * @index: The index
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *tmp = *head, *last = NULL;
	unsigned int count, i = 0;

	if (head == NULL)
		return (-1);
	if (*head != NULL)
	{
		count = node_count(tmp);
		if (index > count - 1)
			return (-1);
		if (index == 0)
		{
			*head = current->next;
			if (current->next != NULL)
				current->next->prev = NULL;
			free(current);
			return (1);
		}
		while (current != NULL && (i < index))
		{
			current = current->next;
			i++;
		}
		if (current == NULL)
			return (-1);
		if (current->next == NULL)
		{
			current->prev->next = NULL;
			free(current);
			return (1);
		}
		last = current->next;
		current->prev->next = last;
		last->prev = current->prev;
		free(current);
		return (1);
	}
	return (-1);
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
