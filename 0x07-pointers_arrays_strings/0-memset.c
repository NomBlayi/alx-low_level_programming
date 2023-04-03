#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @n: first memory to be filled
 * @b: constant byte
 * @s: pointer
 * Return: @s pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
	s[a] = b;
	n--;
	}
	return (s);
}
