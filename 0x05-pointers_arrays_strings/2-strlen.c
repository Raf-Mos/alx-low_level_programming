#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: input
 *
 * Return: length
 */

int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
		l++;

	return (l);
}
