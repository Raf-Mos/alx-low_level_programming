#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 *
 * @dest: memory area
 * @src: source
 * @n: size of src to be copied
 *
 * Return: dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
