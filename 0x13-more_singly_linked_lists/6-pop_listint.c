#include "lists.h"

/**
 * pop_listint - A function that deletes the head node
 * of a listint_t linked list
 * @head: a pointer to pointer to first node of the list
 *
 * Return: the value of the deleted node or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *i;
	int c;

	if (head == NULL || *head == NULL)
	return (0);

	c = (*head)->n;
	i = (*head)->next;
	free(*head);
	*head = i;
	return (c);
}
