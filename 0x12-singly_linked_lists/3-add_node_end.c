#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of
 * a linked list
 * @head: The new node to be added
 * @str: Sting to be duplicated
 *
 * Return: Address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;
	int len;

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
	{
		return (NULL);
	}
	last_node->str = strdup(str);
	if (last_node->str == NULL)
	{
		free(last_node->str);
	}
	for (len = 0; str[len] != '\0'; len++)
		;
	last_node->len = len;
	last_node->next = (*head);
	*head = last_node;
	head = NULL;
	return (last_node);
}
