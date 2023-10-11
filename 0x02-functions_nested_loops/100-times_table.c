#include "main.h"

/**
 * print_times_table - function that prints n times table
 *
 * @n: input
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				k = i * j;

				if (k <= 9)
					_putchar(' ');
				if (k <= 99)
					_putchar(' ');

				if (k >= 100)
				{
					_putchar((k / 100) + 48);
					_putchar(((k / 10) % 10) + 48);
				}
				if (k <= 99 && k >= 10)
					_putchar((k % 10) + 48);
				_putchar((k % 10) + 48);
			}
		_putchar('\n');
		}
	}
}
