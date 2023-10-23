#include "main.h"

/**
 * *_strstr - function that locates a substring.
 *
 * @haystack: string
 * @needle: string
 *
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack != '\0')
	{
		while (haystack[i] == needle[i] && needle[i] != '\0')
			i++;
		if (needle[i] == '\0')
			return (haystack);
	}
	return (0);
}
