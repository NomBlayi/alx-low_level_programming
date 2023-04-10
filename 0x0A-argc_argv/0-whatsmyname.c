#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints its name, followed by a new line
 * @argc: an argument count
 * @argv: an argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}

