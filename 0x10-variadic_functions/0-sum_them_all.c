#include "variadic_functions.h"
#include <stdarg.h>

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

	va_list ap;
	int sum = 0;
	unsigned int i = n;

	if (!n)
		return (0);

	va_start(ap, n);

	while (i--)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);

}
