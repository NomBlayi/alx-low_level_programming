#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - A function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: string copy
 * Return: a pointer to the duplicated string, NULL if str is NULL
 */

char *_strdup(char *str)
{
	int a = 0, b = 1;
	char *c;

	if (str == NULL)
	return (NULL);
	while (str[b])
	{
	b++;
	}
	c = malloc((sizeof(char) * b) + 1);
	if (c == NULL)
	return (NULL);
	while (a < b)
	{
	c[a] = str[a];
	a++;
	}
	c[a] = '\0';
	return (c);
}
