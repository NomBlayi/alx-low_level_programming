#include "lists.h"

/**
 * listint_len - A function that returns the number of elements
 * in a linked listint_t list.
 * @h: pointer to linked list of type listint_t
 * Return: the numbe of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
	a++;
	h = h->next;
	}
	return (a);
}
