#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: First integer to swap the value of
 * @b: Second integer to swap the value of
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

