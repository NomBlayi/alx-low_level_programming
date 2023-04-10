#include <stdio.h>

/**
 * main - A program that prints the number
 * of arguments passed into it
 * @argc: an argument count
 * @argv: an argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
