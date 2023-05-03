#include "lists.h"
 /**
  * free_listint_safe - A function that frees a listint_t list
  * @h: a pointer to pointer to the first node in the linked list
  * Return: the size of the list that was free’d
  */
size_t free_listint_safe(listint_t **h)
{
	size_t a = 0;
	int c;
	listint_t *i;

	if (!h || !*h)
	return (0);

	while (*h)
	{
	c = *h - (*h)->next;
	if (c > 0)
	{
	i = (*h)->next;
	free(*h);
	*h = i;
	a++;
	}
	else
	{
	free(*h);
	*h = NULL;
	a++;
	break;
	}
	}
	*h = NULL;
	return (a);
}
