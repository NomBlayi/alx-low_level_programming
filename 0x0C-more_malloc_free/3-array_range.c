#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - A function that creates an array of integers
 * @min: input value
 * @max: input value
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *c, a = 0;

	if (min > max)
	return (NULL);
	c = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (c == NULL)
	return (NULL);
	while (min <= max)
	{
	c[a] = min;
	a++;
	min++;
	}
	return (c);
}
