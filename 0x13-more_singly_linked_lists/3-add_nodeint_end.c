#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: head node of the list
 * @n: integer value of the new node
 *
 * Description: adds a node at the end of a listint_t list
 *
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	temp = *head;
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
		new->n = n;
		new->next = NULL;
	} else
	{
		new->n = n;
		new->next = NULL;
		*head = new;
	}

	return (new);
}
