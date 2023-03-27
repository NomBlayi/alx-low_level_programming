#include "main.h"

/**
 * _puts - A function that prints a string
 * @str: string to be printed
 * Return: Nothing
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
