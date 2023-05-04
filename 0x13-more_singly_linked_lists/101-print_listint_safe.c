#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - A function that prints a listint_t linked list
 * @head: a pointer to the head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *c = head;
	const listint_t *d = NULL;
	size_t count = 0;

	while (c != NULL)
	{
	printf("[%p]%d\n", (void *)c, c->n);
	count++;
	if (c < d)
	{
	exit(98);
	}
	d = c;
	c = c->next;
	}
	return (count);
}
