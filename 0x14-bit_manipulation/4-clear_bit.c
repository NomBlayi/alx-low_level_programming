#include "main.h"
#include <stdio.h>

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: a pointer value of a bit
 * @index: the index starting from 0 of the bit to set
 * Return: 1 if it workd, or -1 if an error occur
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);
	*n &= ~(1UL << index);
	return (1);
}
