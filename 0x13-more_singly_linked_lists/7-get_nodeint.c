#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets the nth node of a linked list
 * @head: head node of the linked list
 * @index: index of the node to be retrieved
 *
 * Description: gets the nth node of a listint_t linked list base
 * on the index passed
 *
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = head;
	while (node != NULL)
	{
		if (i == index)
			return (node);

		node = node->next;
		i++;
	}

	return (NULL);
}
