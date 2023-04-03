#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input value
 * @size: input value
 * Return: 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int b;
	int c;
	int d;

	b = 0;
	c = 0;

	for (d = 0; d < size; d++)
	{
	b = c + a[d * size + d];
	}
	for (d = size - 1; d >= 0; d--)
	{
	c += a[d * size + (size - d - 1)];
	}
	printf("%i, %i\n", b, c);
}
