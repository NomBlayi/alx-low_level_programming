#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - A function that prints a name
 * @name: a name to be printed
 * @f: funtion pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
	f(name);
}
