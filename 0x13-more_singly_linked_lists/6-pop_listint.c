#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: head of list
 * Return: head node's integer
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *current;

	if (!*head)
		return (0);
	i = (*head)->n;
	current = *head;
	*head = (*head)->next;
	free(current);
	return (i);
}
