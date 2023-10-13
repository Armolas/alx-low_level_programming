#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: head of the list
 * Return: number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nb  = 0;

	if (!h)
		return (nb);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nb++;
	}
	return (nb);
}
