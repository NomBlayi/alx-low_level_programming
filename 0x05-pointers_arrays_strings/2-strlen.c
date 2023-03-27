#include "main.h"
#include <stdio.h>

/**
 * _strlen - A function that returns the length of a string
 * @s: string to return length of
 * Return: The length of a @s
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	length++;
	return (length);
}
