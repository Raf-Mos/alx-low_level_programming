#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely.
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *n1 = head, *n2;
	size_t i = 0;


	while (n1)
	{
		printf("[%p] %d\n", (void *)n1, n1->n);

		i++;
		n2 = head;
		if (n2 == n1->next)
		{
			printf("-> [%p] %d\n", (void *)n1->next, n1->next->n);
			return (i);
		}
		while (n2 != n1)
		{
			if (n2 == n1->next)
			{
				printf("-> [%p] %d\n", (void *)n1->next, n1->next->n);
				return (i);
			}
			n2 = n2->next;
		}

		n1 = n1->next;
		if (!head)
		{
			exit(98);
		}
	}
	return (i);
}
