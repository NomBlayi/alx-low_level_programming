#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - A function that prints all the elements of the list_t list
 * @h: a pointer to the list_t list for printing
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
	if (temp->str == NULL)
	printf("[0](nil)\n");
	else
	printf("[%u]%s\n", temp->len, temp->str);
	temp = temp->next;
	a++;
	}
	return (a);
}
