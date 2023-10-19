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
	int j, i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j]; j++, i++)
		dest[i] = src[j];
	
	return (dest);
}
