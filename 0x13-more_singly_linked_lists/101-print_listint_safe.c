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
	size_t i = 1;

	printf("[%p] %d\n", (void *)n1, n1->n);

	n1 = n1->next;

	while (n1)
	{
		if (n1 <= n1->next)
		{
			printf("-> [%p] %d\n", (void *)n1->next, n1->next->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)n1, n1->n);
		i++;
		n1 = n1->next;
	}
	return (i);
}
