#include "lists.h"

/**
 * add_nodeint - Entry point
 * @head: The node
 * @n: The integer to be added to the list
 *
 * Description: Function that adds a new node
 * at the beginning of a linked list
 * Return: The address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *(head);
	*head = new;
	return (new);
}
