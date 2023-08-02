#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 * @head: The node
 * @index: Index of the node
 *
 * Description: Function returns the nth node
 * of a listint_t linked list
 * Return: The nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (head)
	{
		head = head->next;
		if (i == index - 1)
		{
			if (head == NULL)
			{
				return (NULL);
			}
			break;
		}
		i++;
	}
	return (head);
}
