#include <unistd.h>
#include <main.h>

/**
 * _putchar - write the character c to stdout
 * 0c: the character to print
 *
 * Return: On success 1.
 *	On error, -1 is returned, and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
