#include "main.h"

/**
 * *_strncat - function that concatenates two strings.
 *		n the number oh characters that will be concatenated
 *
 * @dest: string one
 * @src: string tow
 * @n: input numer of characters
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] < n; j++, i++)
		dest[i] = src[j];

	return (dest);
}
