#include "lists.h"
/**
 * sum_dlistint - sums all elements of a doubly linked list
 * @head: head of the list
 * Return: sum of elements in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum  = 0;

	if (!h)
		return (sum);
	while (h)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
