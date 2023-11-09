#include "function_pointers.h"

/**
*array_iterator - executes a function on each element of an array
*@array: int array
*@size: size of array
*@action: function to execute
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action && size)
	{
		while (size-- > 0)
		{
			action(*array);
			array++;
		}
}
