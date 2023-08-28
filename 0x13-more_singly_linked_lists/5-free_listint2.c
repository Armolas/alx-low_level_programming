#include "lists.h"
/**
 * free_listint2 - frees a list and set head to NULL
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *newhead;

	newhead = *head;
	while (newhead)
	{
		current = newhead;
		newhead = newhead->next;
		free(current);
	}
}
