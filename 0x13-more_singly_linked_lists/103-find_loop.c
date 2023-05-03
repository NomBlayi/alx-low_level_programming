#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list
 * @head: linked list to find
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i = head;
	listint_t *c = head;

	if (head == NULL)
	return (NULL);
	while (i && c && c->next)
	{
	c = c->next->next;
	i = i->next;
	if (c == i)
	{
	i = head;
	while (i != c)
	{
	i - i->next;
	c = c->next;
	}
	return (c);
	}
	}
	return (NULL);
}
