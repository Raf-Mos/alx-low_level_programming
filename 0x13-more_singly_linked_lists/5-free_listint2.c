#include "lists.h"

/**
 * free_listint2 - frees a list of ints
 * @head: pointer to the head of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
	*head = NULL;
}
