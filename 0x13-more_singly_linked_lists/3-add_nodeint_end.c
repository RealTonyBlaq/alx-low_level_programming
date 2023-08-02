#include "lists.h"

/**
 * add_nodeint_end - Entry point
 * @head: The end node
 * @n: Integer variable in listint_t list
 *
 * Description: Function adds a node at the end
 * of a linked list
 * Return: The end node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *new = *head;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
	{
		return (NULL);
	}
	end->n = n;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		while (new->next != NULL)
		{
			new = new->next;
		}
		new->next = end;
	}
	return (end);
}
