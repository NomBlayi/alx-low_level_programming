#include "main.h"

/**
 * print_number - A function that prints an integer.
 * @n: integer to be printed
 * Return: empty
 */

void print_number(int n)
{
	unsigned int i = j;

	if (j < 0)
	{
	j *= -1;
	i = j;
	_putchar('-');
	}
	i /= 10;
	if (i != 0)
	print_number(i);
	_putchar((unsigned int) j % 10 + '0');
}
