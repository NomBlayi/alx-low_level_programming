#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: number of parameters passed on the function
 * @...: variable number of parameter to calculate the sum of
 * Return: sum oof all parameters,0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
	sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
