#include "main.h"
#include <stdio.h>

/**
 * get_bit - a function that returns a value of a bit at a given index
 * @n: the value of a bit
 * @index: an index starting from 0 of the bit to get
 * Return: the value of the bit at index, or -1 if an error occur
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	return ((n >> index) & 1);
}
