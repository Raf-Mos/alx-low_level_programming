#include "search_algos.h"

/**
 * advanced_binary - function that searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t i, half_size = size / 2;
	int index;

	if (array == NULL || size == 0)
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
		return (advanced_binary(array, half_size, value));

	half_size++;

	index = advanced_binary(array + half_size, size - half_size, value)
		+ half_size;

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
