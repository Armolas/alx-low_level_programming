#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	current = head;
	free(head);
	while (current->next)
	{
		current = current->next;
		free(current);
	}
}
