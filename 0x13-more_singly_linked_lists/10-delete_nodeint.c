#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node
 * at index index of a listint_t linked list
 * @head: a pointer to pointer to the first element in the list
 * @index: the index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *i = *head;
	listint_t *c = NULL;
	unsigned int a = 0;

	if (*head == NULL)
	return (-1);
	if (index == 0)
	{
	*head = (*head)->next;
	free(i);
	return (1);
	}
	while (a < index - 1)
	{
	if (!i || !(i->next))
	return (-1);
	i = i->next;
	a++;
	}
	c = i->next;
	i->next = c->next;
	free(c);
	return (1);
}
