#include "lists.h"

/**
 * print_listint - returns the number of elements in a linked list
 * @h: pointer to the head of the list
 * 
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return nodes;
}
