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

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *(head);
		*head = temp->next;
		free(temp);
	}
	return (temp->n);
}
