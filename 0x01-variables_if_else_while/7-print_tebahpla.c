#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * in reverse order
 * Return: 0 (Success)
 */

int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	putchar(b);
	putchar('\n');
	return (0);
}

