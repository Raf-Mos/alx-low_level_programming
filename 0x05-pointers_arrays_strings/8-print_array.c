#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 *
 * @a: first input
 * @n: second input
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i])

	printf("%d\n", a[i]);
}
