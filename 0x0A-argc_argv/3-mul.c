#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: an argument count
 * @argv: an argument vector
 * Return: 0 (Success), 1 on error
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0;

	if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
