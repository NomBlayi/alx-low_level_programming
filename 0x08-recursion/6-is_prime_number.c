#include "main.h"
#include <stdio.h>
int _prime_checker(int n, int j);

/**
 * is_prime_number - A function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n: input integer
 * Return: 1 (Success) on error 0
 */

int is_prime_number(int n)
{
	return (_prime_checker(n, 1));
}

/**
 * _prime_checker - checks if the number is prime
 * @n: the number to be checked
 * @j: input value
 * Return: 1 for a prime number , 0 on error
 */

int _prime_checker(int n, int j)
{
	if (n <= 1)
	return (0);
	if (n % j == 0 && j > 1)
	return (0);
	if ((n / j) < j)
	return (1);
	return (_prime_checker(n, j + 1));
}
