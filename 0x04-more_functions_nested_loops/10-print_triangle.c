#include "main.h"

/**
 * print_triangle - A function that prints a triangle
 * @size: size of a triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i <= size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar(' ');
	}
	for (j = 0; j <= i; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}

