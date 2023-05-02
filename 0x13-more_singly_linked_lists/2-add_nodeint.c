#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - A function that adds a new node
 * at the beginning of a listint_t list
 * @head: double pointer to the first node in the list
 * @n: a data to be inserted to the new node
 * Return: a pointer to the new node, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
