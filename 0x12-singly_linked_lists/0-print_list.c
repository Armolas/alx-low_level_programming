#include "lists.h"
/**
 * print_list - prints a list
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t nc = 0;

	if (!h)
		return (0);
	if (h->str)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	nc += print_list(h->next);
	return (nc + 1);
}
