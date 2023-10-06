#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers in ascending order
 *		separated by ',' followed by a space
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
