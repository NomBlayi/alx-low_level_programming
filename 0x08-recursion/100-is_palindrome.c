#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int _pali_checker(char *s, int j, int k);

/**
 * is_palindrome - A function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: string to check
 * Return: 1 (Success), 0 on Error
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	return (1);
	return (_pali_checker(s, 0, _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - A function that returns a length of a string
 * @s: string to be returned
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _pali_checker - A function that compare characters
 * of a string
 * @s: string to be checked
 * @j: input value
 * @k:input value
 * Return: 0 (Success)
 */

int _pali_checker(char *s, int j, int k)
{
	if (*(s + j) == *(s + k))
	{
	if (j == k || j == k + 1)
	return (1);
	return (0 + _pali_checker(s, j + 1, k - 1));
	}
	return (0);
}
