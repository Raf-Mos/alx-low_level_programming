#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: number of arg
 * @argv: list of arg
 *
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	if (argc == 2)
	{
	int i, coins = 0;
	int money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (money >= cents[i])
		{
			coins += money / cents[i];
			money = money % cents[i];
			if (money == 0)
				break;
		}
	}
	printf("%d\n", coins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
