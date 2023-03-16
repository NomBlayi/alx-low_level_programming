#include <stdio.h>
/**
 * main - C program that prints the size of various types
 *
 * Return: 0 (Success)
 *
 */
int main(void);
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %ld bytes\n", sizeof(a));
	printf("Size of an int: %ld bytes\n", sizeof(b));
	printf("Size of a long int: %ld bytes\n", sizeof(c));
	printf("Size of a long long int: %ld bytes\n", sizeof(d));
	printf("Size of a float: %ld bytes\n", sizeof(e));

	return (0);
}

