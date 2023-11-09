#include "variadic_functions.h"

/**
 * sum_them_all - the sum of all its parameters.
 *
 * @n: nbr of arg
 * @...: the int to sum
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list li;
	int sum = 0;
	unsigned int i;

	va_start(li, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(li, int);
	}

	va_end(li);
	return (sum);

}
