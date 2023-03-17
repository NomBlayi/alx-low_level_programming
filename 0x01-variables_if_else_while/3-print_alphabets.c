#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints the alphabet in lower then uppercase
 * Return: 0 (Success)
 */

int main(void)
{
	char upper;

	for (upper = 'a'; upper <= 'z'; upper++)
	putchar(upper);

	for (upper = 'A'; upper <= 'Z'; upper++)
	putchar(upper);
	putchar('\n');
	return (0);
}

