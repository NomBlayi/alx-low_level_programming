#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns
 * the nth node of a listint_t linked list
 * @head: the first node in the linked list
 * @index: index of the node to be returned
 * Return: the pointer to the node
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *i = head;

	while (i && a < index)
	{
	i = i->next;
	a++;
	}
	return (i ? i : NULL);
}
