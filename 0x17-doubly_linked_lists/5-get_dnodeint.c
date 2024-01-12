#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a list.
 * @head: The head of the list.
 * @index: The node to locate.
 *
 * Return: the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}

	return (head);
}
