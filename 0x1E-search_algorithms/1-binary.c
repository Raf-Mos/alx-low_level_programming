#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, half_size = size / 2;

	if (array == NULL)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (size % 2 == 0 && half_size)
		half_size--;

	if (value == array[half_size])
		return (half_size);

	if (value < array[half_size])
		return (binary_search(array, half_size, value));

	half_size++;

	return (binary_search(array + half_size, size - half_size, value)
			+ half_size);
}
