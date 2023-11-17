#include "lists.h"

void _first(void) __attribute__ ((constructor));

/**
 * _first - executes before main()
 *
 * Return: void
 */

void _first(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
