#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - A function that inserts
 * a new node at a given position
 * @head: a pointer to pointer to the first node in the list
 * @idx: an index for the new node
 * @n: input data to store in the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new_node;
	listint_t *i = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}
	for (a = 0; i && a < idx; a++)
	{
	if (a == idx - 1)
	{
	new_node->next = i->next;
	i->next = new_node;
	return (new_node);
	}
	else
	i = i->next;
	}
	return (NULL);
}
