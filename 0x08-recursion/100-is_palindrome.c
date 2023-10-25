#include "main.h"

/**
 * is_palindrome - function that checks if a string is a palindrome
 *
 * @s: string input
 * @i: start point
 * @l: length of the string
 *
 * Return: 1 if palindrome else 0
 */

int pal(char *s, int i, int l);
int _strlen(char *s);

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (pal(s, 0, _strlen(s)));
}

/**
 * _strlen - function the count the size of a string
 *
 * @s: string input
 *
 * Return: length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * pal - function that checks if a string is a palindrome
 *
 * @s: string input
 * @i: strat point
 * @l: length of the string
 *
 * Return: 1 if palindrome else 0
 */
int pal(char *s, int i, int l)
{
	if (*(s + i) != *(s + (l - 1)))
		return (0);
	if (i >= l)
		return (1);
	return (pal(s, i + 1, l - 1));
}
