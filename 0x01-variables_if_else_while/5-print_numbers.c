#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print Numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d%", n);
		n++;
	}
	printf("\n");

	return (0);
}
