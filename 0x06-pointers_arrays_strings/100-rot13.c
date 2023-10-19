#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13.
 *
 * @n: string
 *
 * Return: rot13 encoded string
 */

char *rot13(char *n)
{
	int i;
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*n)
	{
		for (i = 0; i < 52; i++)
		{
			if (*n == ch[i])
			{
				*n = rot[i];
				break;
			}
		}
		n++;
	}
	return (n);
}
