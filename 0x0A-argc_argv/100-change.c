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
	int sum = 0;
	int money = atoi(argv[1]);

	if (argc == 2)
	{
		if (money > 0)
		{
			sum = sum + (money / 25);
			if (money % 25 != 0)
			{
				sum = sum + ((money % 25) / 10);
				if (money % 10 != 0)
				{
					sum = sum + ((money % 10) / 5);
					if (money % 5 != 0)
					{
						sum = sum + ((money % 5) / 2);
						if (money % 2 != 0)
							sum = sum + (money % 2);
					}
			
				}
		
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", sum);
	return (0);
}
