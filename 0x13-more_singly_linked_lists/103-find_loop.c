#include "lists.h"

/**
 * find_listint_loop - Finds the loop in
 * a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: NULL - if there is no loop, otherwise
 * it returns the address of the node where the
 * loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node, *node2;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	node = head->next;
	node2 = (head->next)->next;
	while (node2)
	{
		if (node == node2)
		{
			node = node2;
/**			while (node != node2)
			{
				node = node->next;
				node2 = node2->next;
			}*/
			return (node);
		}
		node = node->next;
		node2 = (node2->next)->next;
	}
	return (NULL);
}
