#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that prints all the elements of the list_t list
 * @h: a pointer to the list_t list for printing
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;
	const list_t *i = h;

	while (i != NULL)
	{
	if (i->str == NULL)
	printf("[0](nil)\n");
	else
	printf("[%u]%s\n", i->len, i->str);
	i = i->next;
	a++;
	}
	return (a);
}
