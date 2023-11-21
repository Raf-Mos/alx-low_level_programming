#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: address of pointer to head list
 * @index: index of the node to delete
 *
 * Return: 1 on success else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	node = *head;

	while (node)
	{
		if (i == index)
		{
			prev->next = node->next;
			free(node);
			return (1);
		}
		i++;
		prev = node;
		node = node->next;
	}
	return (-1);
}
