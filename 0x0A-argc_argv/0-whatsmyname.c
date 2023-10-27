#include <stdio.h>

/**
 * main - prints program name
 *
 * @argc: number of arg
 * @argv: list of arg
 *
 * Return: 0
 */

int main(int argc, char const **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
