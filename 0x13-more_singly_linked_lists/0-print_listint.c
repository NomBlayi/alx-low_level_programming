#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list
 *
 * @h: pointer linked list of listint_t to print
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
	printf("%d\n", h->n);
	a++;
	h = h->next;
	}
	return (a);
}
