#include "lists.h"

/**
 * add_nodeint_end - adds a node to the bottom
 * @head: pointer to the head of the list
 * @n: new node value
 *
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *t;

	if (!head || !new)
		return (NULL);

	new->next = NULL;
	new->n = n;
	if (!*head)
		*head = new;
	else
	{
		t = *head;
		while (t->next)
			t = t->next;
		t->next = new;
	}
	return (new);
}
