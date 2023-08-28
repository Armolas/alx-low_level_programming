#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (current)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
