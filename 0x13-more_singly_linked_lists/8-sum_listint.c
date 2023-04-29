#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: head of a list.
 *
 * Return: int.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
