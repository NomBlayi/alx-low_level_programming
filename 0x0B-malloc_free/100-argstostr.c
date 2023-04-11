#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - A function that concatenates
 * all the arguments of your program
 * @ac: an argument count
 * @av: an argument vectorr
 * Return: a pointer to a new string, NULL on Error
 */

char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *j;

	if (ac == 0 || av == NULL)
	return (NULL);
	while (b < ac)
	{
	while (av[b][c])
	{
	a++;
	c++;
	}
	c = 0;
	b++;
	}
	j = malloc((sizeof(char) * a) + ac + 1);
	b = 0;
	while (av[b])
	{
	while (av[b][c])
	{
	j[d] = av[b][c];
	d++;
	c++;
	}
	j[d] = '\n';
	c = 0;
	d++;
	b++;
	}
	d++;
	j[d] = '\0';
	return (j);
}
