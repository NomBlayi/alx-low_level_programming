#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - A function that counts the number
 * of unique node
 * @head: a pointer to the head of the listint_t
 * Return: the number of unique node,
 * -0 if the list is not looped
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *a, *b;
	size_t unique = 1;

	if (head == NULL || head->next == NULL)
	return (0);
	a = head->next;
	b = (head->next)->next;
	while (b)
	{
	if (a == b)
	{
	a = b;
	while (a != b)
	{
	unique++;
	a = a->next;
	b = b->next;
	}
	a = a->next;
	while (a != b)
	{
	unique++;
	a = a->next;
	}
	return (unique);
	}
	a = a->next;
	b = (b->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - A function that prints a listint_t linked list
 * @head: a pointer to the head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *c = head;
	size_t unique, count = 0;

	unique = looped_listint_len(head);
	if (unique == 0)
	{
	for (; c != NULL; unique++)
	{
	printf("[%p]%d\n", (void *)c, c->n);
	c = c->next;
	}
	}
	else
	{
	for (count = 0; count < unique; count++)
	{
	printf("[%p]%d\n", (void *)c, c->n);
	c = c->next;
	}
	printf("->[%p]%d\n", (void *)c, c->n);
	}
	return (unique);
}
