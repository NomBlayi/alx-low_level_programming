#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints all numbers of base 16 in lowercase
 * Return: 0(Success)
 */

int main(void)
{
	int i;
	char b;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	for (b = 'a'; b <= 'f'; b++)
	putchar(b);
	putchar('\n');
	return (0);
}

