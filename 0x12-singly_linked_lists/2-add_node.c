#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the
 * beginning of a linked list
 * @head: The new node
 * @str: The string to be contained in the new node
 *
 * Return: Address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node->str);
	}
	for (len = 0; str[len] != '\0'; len++)
		;
	new_node->len = len;
	new_node->next = (*head);
	*head = new_node;
	return (new_node);
}
