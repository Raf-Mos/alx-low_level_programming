#include "lists.h"

/**
 * sum_listint - returns sum of all data
 * @head: pointer to first node
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; head = head->next)
		sum += head->n;

	return (sum);
}
