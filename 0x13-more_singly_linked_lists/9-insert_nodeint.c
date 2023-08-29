#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at nth index
 * @head: head of list
 * @idx: nth index
 * @n: the integer to add to list
 * Return: pointer to new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *current = *head;

	while (i < idx - 1 && current)
	{
		current = current->next;
		i++;
	}
	if (!current)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = current->next;
	current->next = new;
	return (new);
}
