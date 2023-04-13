#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: input value
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	exit(98);

	return (a);
}
