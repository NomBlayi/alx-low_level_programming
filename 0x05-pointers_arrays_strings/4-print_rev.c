#include "main.h"
#include <stdio.h>

/**
 * print_rev - A function that prints a string, in reverse
 * @s: the string to print
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
	a++;
	}
	for (a -= 1; a >= 0; a--)
	{
	_putchar(s[a]);
	}
	_putchar('\n')
}

