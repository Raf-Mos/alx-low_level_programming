#include "lists.h"

/**
 * add_node_end - adds a node to the end of a list
 * @head: list head
 * @str: string
 *
 * Return: last node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node = malloc(sizeof(list_t));


	if (!head || !last_node)
		return (NULL);

		last_node->str = strdup(str);
		list_t *link = *head;

		while (link->next)
			link = link->next;

		link->next = last_node;
	return (last_node);
}
