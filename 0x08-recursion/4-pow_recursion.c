#include "main.h"

/**
 * _pow_recursion - function that returns the value of x 
 *			raised to the power of y
 *
 * @x: input number
 * @y: input power
 *
 * Return: x power y
 */

int _pow_recursion(int x, int y)
{
	int i = 0;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (i != y)
	{
		i++;
		return (x * _pow_recursion(x, y - i));
	}
}
