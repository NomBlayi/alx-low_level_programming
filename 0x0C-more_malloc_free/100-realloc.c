#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - A function that reallocates a memory block
 * using malloc and free
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for @ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: a pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;
	unsigned int a;

	if (new_size == old_size)
	return (ptr);
	if (ptr == NULL)
	{
	c = malloc(new_size);
	if (c == NULL)
	return (NULL);
	return (c);
	}
	else
	{
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	}
	c = malloc(new_size);
	if (c == NULL)
	return (NULL);
	for (a = 0; a < old_size && a < new_size; a++)
	{
	c[a] = ((char *) ptr)[a];
	}
	free(ptr);
	return (c);
}
