#include "lists.h"

/**
 * free_list - frees a list
 * @head: list head
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *link;

	while (head)
	{
		link = head->next;
		free(head->str);
		free(head);
		head = link;
	}
}
