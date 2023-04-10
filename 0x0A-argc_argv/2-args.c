#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints all arguments it receives
 * @argc: an argument count
 * @argv: an argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
	printf("%s\n", argv[a]);
	}
	return (0);
}
