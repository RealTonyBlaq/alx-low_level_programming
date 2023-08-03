#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a
 * given index of a linked list
 * @head: The node
 * @index: Index of the node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *duplicate = *head;
	listint_t *temp;
	unsigned int i_node;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(duplicate);
		return (1);
	}
	i_node = 0;
	while (i_node < index - 1)
	{
		if (duplicate->next == NULL)
		{
			return (-1);
		}
		duplicate = duplicate->next;
		i_node++;
	}
	temp = duplicate->next;
	duplicate->next = temp->next;
	free(temp);
	return (1);
}
