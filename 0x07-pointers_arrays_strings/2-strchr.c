#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @c: character to be located
 * @s: string to locate a string to
 * Return: 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
	if (s[a] == c)
	return (&s[a]);
	}
	return (0);
}
