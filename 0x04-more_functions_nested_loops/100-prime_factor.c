#include <stdio.h>
#include <math.h>

/**
 * main - program that finds and prints the largest prime factor
 *  of the number 612852475143
 *  Return: 0 (Success)
 */

int main(void)
{
	long int n = 612852475143;
	long int max;
	long int i;
	double square = sqrt(n);

	for (i = 1; i <= square; i++)
	{
	if (n % i == 0)
	{
	max = n / i;
	}
	}
	printf("%ld\n", max);
	return (0);
}

