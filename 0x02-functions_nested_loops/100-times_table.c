#include "main.h"

/**
 * print_times_table - A function that prints the n times table
 *  starting with 0.
 *  @n: The value to be printed
 */

void print_times_table(int n)
{
	int num, multiple, prod;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar('0');
	for (multiple = 1; multiple <= n; multiple++)
	{
	_putchar(',');
	_putchar(' ');
	prod = num * multiple;
	if (prod <= 99)
	_putchar(' ');
	if (prod <= 9)
	_putchar(' ');
	if (prod >= 100)
	{
	_putchar((prod / 100) + '0');
	_putchar(((prod / 10)) % 10 + '0');
	}
	else if (prod <= 99 && prod >= 10)
	{
	_putchar((prod / 10) + '0');
	}
	_putchar((prod % 10) + '0');
	}
	_putchar('\n');
	}
	}
}

