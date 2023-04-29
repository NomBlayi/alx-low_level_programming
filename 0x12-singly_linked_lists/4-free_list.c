#include <stdlib.h>
#include "lists.h"

/**
 * free_list - A function that frees a linked list
 * @head: a list_t list to be free
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *i;

	while (head != NULL)
	{
	i = head;
	head = head->next;
	free(i);
	}
}
