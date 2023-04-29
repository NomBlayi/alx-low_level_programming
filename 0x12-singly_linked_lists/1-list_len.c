#include "lists.h"
#include <stdlib.h>

/**
 * list_len - A fuction that returns the number of elements
 * in a linked list_t link
 * @h: a pointer to the list_t list
 * Return: the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
	a++;
	h = h->next;
	}
	return (a);
}
