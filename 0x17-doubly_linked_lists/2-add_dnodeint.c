#include "lists.h"

/**
 * add_dnodeint - Adds a node at the beginning of a dlistint_t list
 * @head: The head node
 * @n: The data (integer) to be added
 *
 * Return: The address of the new list, else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
