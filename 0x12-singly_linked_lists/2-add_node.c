#include "lists.h"

/**
 * add_node - adds a node to the start of the list
 * @head: list head
 * @str: string
 *
 * Return: new head list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *h = malloc(sizeof(list_t));

	if (!head || !h)
		return (NULL);
	if (str)
	{
		h->str = strdup(str);
		if (!h->str)
		{
			free(h);
			return (NULL);
		}
		h->len = _strlen(h->str);
	}

	h->next = *head;
	*head = h;
	return (h);
}
