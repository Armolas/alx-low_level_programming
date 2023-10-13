#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: head of the list
 * @idx: index to add node
 * @n: element to add
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	while (i < idx)
	{
		if (current)
			current = current->next;
		else
			break;
		i++;
	}
	if (i == idx)
	{
		new->next = current;
		new->prev = current->prev;
		current->prev->next = new;
		current->prev=new;
		return (new);
	}
	return (NULL);
}
