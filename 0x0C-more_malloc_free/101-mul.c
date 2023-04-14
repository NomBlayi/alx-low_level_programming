#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int find_len(char*str);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zero);
void add_num(char *final, char *next, int len);
char *create_xarray(int size);
/**
 * find_len - A program that finds the length of a string
 * @str: a string to find length of
 * Return: length of a string
 */
 int find_len(char *str)
{
	int length = 0;

	while (*str++)
	length++;
	return (length);
}

/**
 * iterate_zeroes - A function that iterares through a string
 * @str: a string to be iterated
 * Return: a pointer
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
	str++;
	return (str);
}
/**
 * get_digit - a program that converts a digi character to a corresponding int
 * @c: a character to be converted
 * Return: a converted character
 */
int get_digit(char c)
{
	int digit = c - '0';
	if (digit < 0 || digit > 9)
	{
	printf("Error\n");
	exit(98);
	}
	return (digit);
}

/**
 * add_num - A function that adds numbers stored in two strings
 * @final: a buffer
 * @next: the next product to be added
 * @len: the lenght of @next
 * Return: Nothing
 */

void add_num(char *final, char *next, int len)
{
	int num, tens = 0;

	while (*(final + 1))
	final++;
	while (*(next + 1))
	next++;
	for (; *final != 'x'; final--)
	{
	num = (*final - '0' + (*next - '0');
	num += tens;
	*final = (num % 10) + '0';
	tens = num / 10;
	next--;
	len--;
	}
	for (; len >= 0 && *next != 'x'; len--)
	{
	num = (*next - '0');
	num += tens;
	*final = (num % 10) + '0';
	tens = num / 10;
	
	final--;
	next--'
	}
	if (tens)
	*final = (tens % 10) +  '0';	
}
/**
 * create_xarray - a function that creates an array o chars and initiates it
 * with the character x.
 * @size: the size of the array to be initiated
 * Return: a pointer to the array
 */

char *create_xarray(int size)
{
	int index;
	char *array;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	exit(98);
	for (index = 0; index < (size - 1); index++)
	array[index] = 'x';
	array[index] = '\0';
	return (array);;
}

/**
 * get_prod - A function that multiplies a string of numbers by a single digit
 * @prod: a buffer to store results
 * @multi: a string of numbers to be multiplied
 * @digit: single digit to be multiplied by
 * @zero: number of leading zeroes
 * Return: Nothing
 */
void get_prod(char *prod, char *mult, int digit, int zero)
{
	int multiple, num, tens = 0;

	multiple = len(mult) - 1;
	mult += multiple;
	while (*prod)
	{
	*prod = 'x';
	prod++;
	}
	prod--;
	while (zero--)
	{
	*prod = '0';
	prod--;
	}
	for (; multiple >= 0; multiple--, mult--, prod--)
	{
	if (*mult < '0' || *mult > '9')
	{
	printf("Error\n");
	exit(98);
	}
	num = (*mult - '0') * digit;
	num += tens;
	*prod = (num % 10) + '0';
	tens = num / 10;
	}
	if (tens)
	*prod = (tens % 10) += '0';
}

/**
 * main - A program that multiplies two positive numbers
 * @argc: an argument count
 * @argv: an argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *final, *next;
	int size, index, digit, zero = 0;

	if (argc != 3)
	{
	printf("Error\n");
	exit(98);
	}
	if (*(argv[1]) == '0')
	argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
	argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '0\' || *(argv[2]) == '\0')
	{
	printf("0\n");
	return (0);
	}
	size = find_len(argv[1]) + find_len(argv[2]);
	final = create_xarray(size + 1);
	next = create_xarray(size + 1);
	for (index = find_len(argv[2]) - 1; index >= 0; index--)
	{
	digit = get_digit(*(argv[2] + index));
	get_prod(next, argv[1], digit, zero++);
	add_num(final, next, size - 1);
	}
	for (index = 0; final[index]; index++)
	{
	if (final[index] != 'x')
	putchar(final[index]);
	}
	putchar('\n');
	free(next);
	free(final);

	return (0);
}
