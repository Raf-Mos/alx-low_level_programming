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
	int i, j;
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; n[j] != '\0'; j++)
	{
		for (i = 0; i < 52; i++)
		{
			if (n[j] == ch[i])
			{
				n[j] = rot[i];
				break;
			}
		}
	}
	return (n);
}
