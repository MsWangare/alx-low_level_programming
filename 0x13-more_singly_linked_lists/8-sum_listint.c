#include "lists.h"

/**
 * sum_listint - retuns the sum
 * @head: head node of the linked list
 *
 * Description: returns the sum of all the data (n) of a
 * listint_t linked list
 *
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
