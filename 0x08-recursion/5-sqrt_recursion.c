#include "main.h"
#include <stdio.h>
#include <math.h>
int _sqrt(int n, int a);

/**
 * _sqrt_recursion - A function that returns the natural
 * square root of a number
 * @n: number to return square root of
 * Return: Natural square root, on error -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - A function that calculate natural square root
 * @n: value to calculate square root
 * @a: input value
 * Return: natural square root
 */

int _sqrt(int n, int a)
{
	int sqrt = a * a;

	if (sqrt > n)
	return (-1);
	if (sqrt == n)
	return (a);
	return (_sqrt(n, a + 1));
}
