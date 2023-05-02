#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 * @head: a pointer to pointer to the first node off the list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
	return;
	while (*head != NULL)
	{
	i = *head;
	*head = (*head)->next;
	free(i);
	}
	*head = NULL;
}
