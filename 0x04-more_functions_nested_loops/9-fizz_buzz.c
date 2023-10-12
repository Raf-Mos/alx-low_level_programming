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
	int i;

	printf("1");

	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
