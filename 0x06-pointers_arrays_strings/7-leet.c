#include "main.h"

/**
 * *leet - function that encodes a string into 1337.
 *
 * @n: input string
 *
 * Return: encoded string
 */

char *leet(char *n)
{
	char ch[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	int i, j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == ch[j])
				n[i] = num[j];
		}
	}
	return (n);
}
