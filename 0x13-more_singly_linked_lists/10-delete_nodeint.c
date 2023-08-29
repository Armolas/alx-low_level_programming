#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a nnode at index
 * @head: head of the list
 * @index: index of node to delete
 * Return: 1 0r -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head, *del;

	if (!head)
		return (-1);
	if (index == 0)
	{
		del = *head;
		*head = (*head)->next;
		free(del);
		return (1);
	}
	while (i < index - 1 && current)
	{
		current = current->next;
		i++;
	}
	if (!current->next)
		return (-1);
	del = current->next;
	current->next = del->next;
	free(del);
	return (1);
}

