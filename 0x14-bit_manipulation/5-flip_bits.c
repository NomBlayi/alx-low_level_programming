#include "main.h"
#include <stdio.h>

/**
 * flip_bits - A function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: input value or number of bits to flip
 * @m: Second input vaue
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	unsigned long int sum = n ^ m;

	while (sum != 0)
	{
	c += sum & 1;
	sum >>= 1;
	}
	return (c);
}
