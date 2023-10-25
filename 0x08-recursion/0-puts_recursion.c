#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 *
 * @s: input string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(s);
	_put_recursion(s + 1);
	}
	else
		_putchar('\n');
}
