#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase except q & ie
 * Return: 0 (Success)
 */

int main(void)
{
	char upper, e, q;

	e = 'e';
	q = 'q';
	for (upper = 'a'; upper <= 'z'; upper++)
	{
	if (upper != e && upper != q)
	putchar(upper);
	}
	putchar('\n');
	return (0);
}

