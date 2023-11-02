#include "main.h"

/**
 * *string_nconcat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 * @n: input
 *
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_len = 0, s2_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1_len != '\0')
		s1_len++;
	while (s2_len != '\0')
		s2_len++;

	str = malloc(s1_len + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
