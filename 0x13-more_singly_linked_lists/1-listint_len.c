#include "lists.h"
/**
 * listint_len - returns the number of elements in a list
 * @h: head of list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	i += listint_len(h->next);
	return (i + 1);
}
