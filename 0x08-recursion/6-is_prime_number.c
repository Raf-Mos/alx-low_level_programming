#include "main.h"

/**
 * is_prime_number - function that returns 1
 *			if the input integer is a prime number,
 *			otherwise return 0.
 *
 * @n: input number
 *
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	return (prime_nbr(n, 2));
}

/**
 * prime_nbr - function that check if a number is prime
 *
 * @n: input nbr
 * @i: input start point
 *
 * Return: 1 is prime else 0
 */

int prime_nbr(int n, int i)
{
	if (n <= 1)
		return (0);

	else if (n % i != 0 && i < n)
		return (prime_nbr(n, i + 1));
	else if (n % i == 0 && i < n)
		return (0);

	return (1);
}
