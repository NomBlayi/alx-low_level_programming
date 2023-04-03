#include "main.h"
#include <stdio.h>

/**
 * _putchar - funtion that prints a character to stdout
 * @c: A character to print
 * Return: 1 (Success) , -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
