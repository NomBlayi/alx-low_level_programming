#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t linked list
 * @head: pointer to pointer to the first node in the link
 * Return: a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *then = NULL;

	while (*head)
	{
	then = (*head)->next;
	(*head)->next = previous;
	previous = *head;
	*head = then;
	}
	*head = previous;
	return (*head);
}
