#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - A function that adds a new node
 * at the end of a listint_t list
 * @head: double pointer to the node on the list
 * @n: data to be inserted in the new node
 * Return: a pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *i = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}
	while (i->next)
	i = i->next;
	i->next = new_node;
	return (new_node);
}
