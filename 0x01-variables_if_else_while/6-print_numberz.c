#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints all single digit numbers
 * of base 10 starting from 0, use of any variable type char not allowed
 * Return: 0(Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	putchar('\n');
	return (0);
}

