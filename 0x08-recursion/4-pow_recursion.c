#include "main.h"

/**
 * _pow_recursion - A function that returns the value
 * of x raised to the power of y
 * @x: value to be returned
 * @y: value to raise value of x with
 * Return: input value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
	return (x * _pow_recursion(x, y - 1));
}
