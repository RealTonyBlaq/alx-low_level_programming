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
	listint_t *current;
	listint_t *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free((*head)->n);
		free(*head);
		return (1);
	}
	1 = 0;
	while (i < index - 1)
	{
		*head = (*head)->next;
	}
	if (*head == NULL)
		return (-1);
	current->next = (*head)->next;
