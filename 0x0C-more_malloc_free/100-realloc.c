#include "main.h"


/**
* _realloc - reallocates a memory block using malloc and free
*
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size of the allocated space for ptr
* @new_size: size of the new memory to be allocated
*
* Return: pointer to the address of the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tm;
	unsigned int i;

	if (ptr == NULL)
	{
		tm = malloc(new_size);
		return (tm);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		tm = malloc(new_size);
		if (tm != NULL)
		{
			for (i = 0; i < old_size && i < new_size; i++)
				*((char *)tm + i) = *((char *) ptr + i);
			free(ptr);
			return (tm);
		}
		else
		{
			return (NULL);
		}
	}
}
