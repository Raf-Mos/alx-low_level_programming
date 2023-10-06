#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the alphabet in lowercase followed by uppercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a', CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		ch++;
	}
	putchar('\n');

	return (0);
}
