#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers of base 16 in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n = 48;

	while (n <= 102)
	{
		if (n <= 57 || n >= 97)
			putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
