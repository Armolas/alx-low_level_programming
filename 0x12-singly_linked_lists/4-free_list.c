#include "main.h"
/**
 * free_list - frees a list
 * @head: head of list
 */
void free_list(list_t *head)
{
	if (head)
	{
		while (head->next)
			free(head->next);
		free(head);
	}
}
