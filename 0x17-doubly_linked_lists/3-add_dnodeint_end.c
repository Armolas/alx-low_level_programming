#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end of a doubly
 * @head: head of the list
 * @n: element to add
 * Return: address of new or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
	new->prev = current;
	if (!*head)
		*head = new;
	return (new);
}
