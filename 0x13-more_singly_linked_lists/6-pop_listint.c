#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of the a linked list
 * @head: head node of the linked list
 *
 * Description: deletes the head node of a listint_t list
 * and returns the value n of the node
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	num = temp->n;
	*head = temp->next;

	free(temp);

	return (num);
}
