#include"main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int l, ch;

	for (l = 1; l <= 10; l++)
	{
		for (ch = 'a'; ch = 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
