#include"main.h"

/**
 * _islower - function to check if the character is lowercase
 *
 * @c: check input of function
 *
 * Return: retuns 1 if 'c' is lowercase
 *	otherwise always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
