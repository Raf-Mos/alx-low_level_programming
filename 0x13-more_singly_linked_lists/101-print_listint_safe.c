#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely.
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node1 = head, *node2;
	size_t i = 0;

	while (node1)
	{
		printf("[%p] %d\n", (void *)node1, node1->n);
		i++;

		node2 = head;

		while (node2 && node2 != node1)
		{
			if (node2 == node1->next)
			{
				printf("-> [%p] %d\n", (void *)node1->next, node1->next->n);
				exit(98);
			}
			node2 = node2->next;
		}
		node1 = node1->next;
	}

	return (i);
}
