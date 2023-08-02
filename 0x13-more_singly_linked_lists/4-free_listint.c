#include "lists.h"

/**
 * free_listint - Freeing mem function
 * @head: The head list
 *
 * Description: Function that frees the memory
 * allocated to a listint_t list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	if (head == NULL)
	{
		free(head);
	}
	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
