#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that writes a character c to stdout
 * @c: a character to print
 * Return: 1 (Success), -1 ON error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
