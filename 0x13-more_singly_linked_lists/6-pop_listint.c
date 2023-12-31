#include "lists.h"

/**
 * pop_listint - Entry point
 * @head: The node
 *
 * Description: function deletes the
 * head node of a listint_t linked list
 * Return: The head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *(head);
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
