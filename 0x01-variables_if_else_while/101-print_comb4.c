#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print only the smallest combination of three digits
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n = 0, m, k;

	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			k = 0;
			while (k <= 9)
			{
				if (n != m && n < m && m != k && m < k)
				{
					putchar(n + 48);
					putchar(m + 48);
					putchar(k + 48);

					if (n + m + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
