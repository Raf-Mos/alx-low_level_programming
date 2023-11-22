#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely.
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *n1 = head;
	size_t i = 0;

	while (n1)
	{
		printf("[%p] %d\n", (void *)n1, n1->n);
		i++;

		const listint_t *n2 = head;

		while (n2 != n1)
		{
			if (n2 == n1->next)
			{
				printf("-> [%p] %d\n", (void *)n1->next, n1->next->n);
				exit(98);
			}
			n2 = n2->next;
		}
		n1 = n1->next;
	}

	return (i);
}
