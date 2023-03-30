#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer input value
 * Return: 0 (Success)
 */

void rev_string(char *n)
{
	int a = 0;
	int b = 0;
	char temp1;

	while (*(n + a) != '\0')
	{
	a++;
	}
	a--;
	for (b = 0; b < a; b++, a--)
	{
	temp1 = *(n + b);
	*(n + b) = *(n + a);
	*(n + a) = temp1;
	}
}

/**
 * infinit_add -  A function that adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return:a pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, a = 0, b = 0, digits = 0;
	int val = 0, val1 = 0, temp = 0;

	while (*(n1 + a) != '\0')
	a++;
	while (*(n2 + b) != '\0')
	b++;
	a--;
	b--;
	if (b >= size_r || a >= size_r)
	return (0);
	while (b >= 0 || a >= 0 || overflow == 1)
	{
	if (a < 0)
	val = 0;
	else
	val = *(n1 + a) - '0';
	if (b < 0)
	val1 = 0;
	else
	val1 = *(n2 + b) - '0';
	temp = val + val1 + overflow;
	if (temp >= 10)
	overflow = 1;
	else
	overflow = 0;
	if (digits >= (size_r - 1))
	return (0);
	*(r + digits) = (temp % 10) + '0';
	digits++;
	b--;
	a--;
	}
	if (digits == size_r)
	return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}


