#include "lists.h"
/**
 * print_listint - prints all elements in a list
 * @h: head of the list
 * Return: number of elements in list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	printf("%d", h->n);
	i += print_listint(listint_t h->next);
	return (i + 1);
}
