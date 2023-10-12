#include "main.h"
#include <stdio.h>

/**
 * main - entrey point
 *
 * Description: function that print numbers from 1 to 100
 *		if number is a multiples of three print Fizz
 *		if number is a multiples of five print Buzz
 *		if number is a multiples of both print FizzBuzz
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	printf("1");

	for (n = 2; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) != 0)
			printf(" Fizz");

		else if ((n % 5) == 0 && (n % 3) != 0)
			printf(" Buzz");

		else if ((n % 3) == 0 && (n % 5) == 0)
			print(" FizzBuzz");

		else
			printf(" %d", n);
	}
	printf("\n");
	return (0);
}
