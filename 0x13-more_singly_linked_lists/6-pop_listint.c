#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: pointer to first node
 *
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (!head || !*head)
		return (0);

	h = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = h;
	return (n);
}
