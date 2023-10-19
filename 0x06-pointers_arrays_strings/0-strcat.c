#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 *
 * @dest: string one
 * @src: string tow
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src);
{
	int j, i;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; src[j]; j++)
		dest[i++] = src[j];
	
	return (dest);
}
