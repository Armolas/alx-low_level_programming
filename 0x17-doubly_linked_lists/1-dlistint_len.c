#include "lists.h"
/**
 * dlistint_len - returns number of elements of a doubly linked list
 * @h: head of the list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nb  = 0;

	if (!h)
		return (nb);
	nb++;
	while (h)
	{
		h = h->next;
		nb++;
	}
	return (nb);
}
