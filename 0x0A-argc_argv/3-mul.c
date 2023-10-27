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
	int mul;


	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = *argv[1] * *argv[2];
		printf("%d\n", mul);
	}
	return (0);
}
