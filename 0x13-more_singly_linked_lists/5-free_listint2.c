#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list from memory
 * @head: head node of the linked list
 *
 * Description: frees a listint_t linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
