#include <stdio.h>
/**
 * main - C program that prints the size of various types
 *
 * Return: 0 (Success)
 *
 */
int main(void);
{
	printf("char is %2d bytes \n", sizeof(char));
	printf("int is %2d bytes \n", sizeof(int));
	printf("long int is %2ld bytes \n", sizeof(long int));
	printf("long long int is %ll bytes \n", sizeof(long long int));
	printf("float is %2d bytes \n", sizeof(float));

	return (0);
}

