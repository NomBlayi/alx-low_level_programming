#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - A program that adds positive numbers
 * @argc: an argument count
 * @argv: an argument vector
 * Return: 0 (Success), 1 on Error
 */

int main(int argc, char *argv[])
{
	int a;
	char *b;
	unsigned int c, d = 0;

	if (argc > 1)
	{
	for (a = 1; a < argc; a++)
	{
	b = argv[a];
	for (c = 0; c < strlen(b); c++)
	{
	if (b[c] < '0' || b[c] > '9')
	{
	printf("Error\n");
	return (1);
	}
	}
	d += atoi(b);
	b++;
	}
	printf("%d\n", d);
	}
	else
	{
	printf("0\n");
	}
	return (0);
}
