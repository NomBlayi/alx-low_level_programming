#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - A function that allocates memory for an array, using malloc
 * @nmemb: input value
 * @size: input value
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *c;

	if (nmemb == 0 || size == 0)
	return (NULL);
	b = nmemb * size;
	c = malloc(b);
	if (c == NULL)
	return (NULL);
	while (a < b)
	{
	c[a] = 0;
	a++;
	}
	return (c);
}
