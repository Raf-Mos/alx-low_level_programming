#include "lists.h"

/**
 * listint_t *reverse_listint - function that reverses a list
 *
 * @head: pointer to the head list
 *
 * Return: head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev;
	listint_t *node;

	node = *head;

	while (node)
	{
		next = node->next;
		node->next = prev;
		prev = node;
		node = next;
	}
	node = prev;

	return (node);
}
