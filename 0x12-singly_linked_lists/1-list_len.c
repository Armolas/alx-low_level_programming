#include "lists.h"
/**
 * list_len - returns the length of a list
 * @h: head of the list
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t nc;

	if (!h)
		return (0);
	nc += list_len(h->next);
	return (nc + 1);
}
