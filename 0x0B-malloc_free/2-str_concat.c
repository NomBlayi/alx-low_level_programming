#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - A function that concatenates two strings
 * @s1: first string to concatenates
 * @s2: second string to concatebates
 * Return: @s1 and @s2, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *j;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[a])
	a++;
	while (s2[b])
	b++;
	d = a + b;
	j = malloc((sizeof(char) * d) + 1);
	if (j == NULL)
	return (NULL);
	b = 0;
	while (c < d)
	{
	if (c <= a)
	j[c] = s1[c];
	if (c >= a)
	{
	j[c] = s2[b];
	b++;
	}
	c++;
	}
	j[c] = '\0';
	return (j);
}
