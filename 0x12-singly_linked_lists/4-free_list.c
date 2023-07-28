#include "lists.h"

/**
 * free_list - Function frees a list_t list
 * @head: The list to be freed
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *present_node = head;
	list_t *next_node;

	while (present_node != NULL)
	{
		next_node = present_node->next;
		free(present_node->str);
		free(present_node);
		present_node = next_node;
	}
}
