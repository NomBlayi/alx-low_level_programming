#include "main.h"
/**
 * _isalpha - A function that checks for alphabetic character
 * @c: - character to be checked
 * Return: 1 on alphabetic characters, 0 on anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
