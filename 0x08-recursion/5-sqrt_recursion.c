#include "main.h"


/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: input number
 * @i: input start point
 *
 * Return: 0 (Success)
 */
int real_square(int n, int i);

int _sqrt_recursion(int n)
{
	return (real_square(n, 0));
}


/**
 * real_square - function that return the square root of a number.
 *
 * @n: input
 * @i: input start point
 *
 * Return: the root square
 */

int real_square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i > n)
		return (-1);
	return (real_square(n, i + 1));
}
