#include "main.h"

/**
 * print_triangle - A function that prints a triangle
 * @size: size of a triangle
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
	for (j - 1; j < size; j++)
	{
	_putchar(' ');
	}
	for (j = 1; j <= i; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	if (size <= 0)
	{
	_putchar('\n');
	}
}

