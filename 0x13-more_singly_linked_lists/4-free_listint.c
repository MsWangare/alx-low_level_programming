#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: head node of the list
 *
 * Description: frees a list listint_t from memory
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
