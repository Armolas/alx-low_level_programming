#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: head of the list
 * Return: number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current = h->next->prev;
	size_t nb  = 0;

	if (!h)
		return (nb);
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		nb++;
	}
	return (nb);
}
