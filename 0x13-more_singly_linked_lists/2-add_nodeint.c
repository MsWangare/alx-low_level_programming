#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: head of the linked list
 * @n: integer value of the new node
 *
 * Description: adds a node at the beginning of a listsint_t
 * list
 *
 * Return: new node or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
