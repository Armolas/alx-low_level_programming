#include "main.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (head)
		{
			head = head->next;
			free(head->prev);
		}
		free(head->prev);
	}
}
