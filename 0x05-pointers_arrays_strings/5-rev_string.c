#include "main.h"
#include <stdio.h>

/**
 * rev_string - A function that reverses a string
 * @s: a string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp;

	while (s[index++])
	len++;
	for (index = lenn - 1; index >= len / 2; index--)
	{
	tmp = s[index];
	s[index] = s[len - index - 1];
	s[len - index - 1] = tmp;
	}
}
