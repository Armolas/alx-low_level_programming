#include "lists.h"
/**
 * get_dnodeint_at_index - gets a linked node at index
 * @head: head of the list
 * @index: index to get
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	if (!head)
		return (NULL);
	while (i < index)
	{
		if (current)
			current = current->next;
		else
			break;
		i++;
	}
	if (i == index)
		return (current);
	return (NULL);
}
