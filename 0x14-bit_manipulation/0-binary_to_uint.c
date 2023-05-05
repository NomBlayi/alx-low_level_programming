#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binarynumber to an unsigned int
 * @b: a pointer to a string
 * Return: the converted number, or 0 if there is one or more char
 * in the string b that is not 0 or 1 or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0;

	if (b == 0)
	{
	return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] != 48 && b[i] != 49)
	{
	return (0);
	}
	sum = sum * 2 + (b[i] - 48);
	}
	return (sum);
}
