#include "lists.h"

/**
 * sum_listint - A function that returns the sum
 * of all the data (n) of a listint_t linked list
 * @head: first node in the linked list
 * Return: sum of all the data, 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *i = head;

	while (i)
	{
	sum += i->n;
	i = i->next;
	}
	return (sum);
}
