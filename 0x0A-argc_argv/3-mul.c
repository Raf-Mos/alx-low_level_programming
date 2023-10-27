#include <stdio.h>

/**
 * main - program that multiplies two numbers.
 *
 * @argc: number of arg
 * @argv: list of arg
 *
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error");
		return (1);
	}

	printf("%s\n", argv[1] * argv[2]);
	return (0);
}
