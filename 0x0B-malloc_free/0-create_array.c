#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array  - A function that creates an array of chars
 * and initializes it with a specific char
 * @size: Array size
 * @c: char to hold the array
 * Return: NULL if size is 0, pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int k;

	if (size == 0)
	return (NULL);

	b = malloc(size * sizeof(char));
	if (b == NULL)
	return (NULL);
	for (k = 0; k < size; k++)
	{
	b[k] = c;
	}
	return (b);
}
