#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: first string to search
 * @accept: second string
 * Return: 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
	for (a = 0; accept[a]; a++)
	{
	if (*s == accept[a])
	return (s);
	}
	s++;
	}
	return ('\0');
}
