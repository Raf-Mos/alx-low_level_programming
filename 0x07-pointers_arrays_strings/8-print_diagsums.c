#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 *
 * @a: array
 * @size: size of array
 *
 * Return: void
 */


void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i][i];
		j = size - 1 - i;
		sum2 = sum2 + a[i][j];
	}

	printf("%d, %d\n", sum1, sum2);
}
