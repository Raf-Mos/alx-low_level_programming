#include "function_pointers.h"

/**
*int_index - searches for an integer
*@array: int array
*@size: size of array
*@cmp: function which compare values
*
*Return: int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
