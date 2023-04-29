#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - A function that adds a new note at the beginning of a list_t list
 * @head: a double pointer to the list_t list
 * @str: a new string to add the node into
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
	len++;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
