#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - A function that frees a listint_t list
 * @head: a listint_t list to get freed
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	while (head)
	{
	i = head->next;
	free(head);
	head = i;
	}
}
