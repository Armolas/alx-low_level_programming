#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: head of list
 * @index: index to delete
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;

	if (index == 0 && *head)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
		free(current);
		return (1);
	}
	while (i < index && current)
	{
		current = current->next;
		i++;
	}
	if (current)
	{
		if (current->next)
		{
			current->next->prev = current->prev;
			current->prev->next = current->next;
		}
		else
			current->prev->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}
