#include "lists.h"

/**
 * free_listint2 - Frees memory
 * @head: The list
 *
 * Description: Function frees memory allocated
 * to a listint_t list and sets head to NULL
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *list;

	while (*head != NULL)
	{
		list = *(head);
		*head = list->next;
		free(list);
	}
	*head = NULL;
}
