#include "main.h"

/**
 * flip_bits - return number of bits that would need
 *  to be flipped to transform one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_v = n ^ m;
	unsigned int i = 0;

	while (xor_v)
	{
		if (xor_v & 1ul)
			i++;
		xor_v = xor_v >> 1;
	}
	return (i);
}
