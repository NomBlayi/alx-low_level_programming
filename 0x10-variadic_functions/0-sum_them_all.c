#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - A function that returns the sum of all it's parameters
 * @n: the number of parameters passed to the function
 * @...: variable number of parameters to calculatte the sum of
 * Return: the sum of allparameters, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
